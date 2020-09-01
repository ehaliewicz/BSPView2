import copy, math, os, pickle, re, sys, struct
from frozendict import frozendict
from dataclasses import make_dataclass, dataclass
import BitVector

wad_data = None
num_directory_entries = None
directory_index = None

directory = {}

def read_wad_data(filename, chunksize=8192):
    global wad_data
    with open(filename, "rb") as f:
        wad_data = f.read()
        
        
def read_byte_at(idx):
    return wad_data[idx]

def read_fixed_len_string(idx,length):
    return ''.join(chr(b) for b in wad_data[idx:idx+length])

def read_terminated_string(idx, maxlen=8):
    chrs = ''
    while True:
        b = wad_data[idx]
        if len(chrs) == maxlen or b == 0:
            break
        chrs += chr(b)
        idx += 1

    return chrs

def read_ints(idx, num=1):
    """Reads a signed 4-byte little endian integer"""
    fmt = '<' + ('l' * num)
    return struct.unpack_from(fmt, wad_data, idx)

def read_shorts(idx, num=1):
    fmt = '<' + ('h' * num)
    return struct.unpack_from(fmt, wad_data, idx)

    
def read_wad_header():
    global num_directory_entries,directory_index
    assert read_fixed_len_string(0, 4) == 'IWAD'
    num_directory_entries,directory_index = read_ints(4, num=2)
    #print("num directory_entries: {}".format(num_directory_entries))


episodes = '1234'
missions = '123456789'

is_doom_two = None

def is_level_name(nm):
    global is_doom_two
    if is_doom_two is None:
        if len(nm) >= 4:
            if nm[0:3] == 'MAP' and nm[4] in missions:
                is_doom_two = True
            elif nm[0] == 'E' and nm[1] in episodes and nm[2] == 'M' and nm[3] in missions:
                is_doom_two = False

    
    if is_doom_two:
        return nm[0:3] == 'MAP'
    else:
        if len(nm) != 4:
            return False
        if nm[0] != 'E':
            return False
        if nm[2] != 'M':
            return False
        if nm[1] not in episodes:
            return False
        if nm[3] not in missions:
            return False
    
        return True


DIRECTORY_ENTRY_SIZE = 16
DIRECTORY_ENTRY_FORMAT = """
  ptr int ;
  size int ; 
  name char[8]
"""
@dataclass
class Directory:
    ptr: int
    size: int
    name: str
    

LINEDEF_SIZE = 14

# could save 3 bytes here
LINEDEF_FORMAT = """
  begin_vert    unsigned_short ; 
  end_vert      unsigned_short ;
  flags         unsigned_short ; 
  line_type     unsigned_short ;
  sector_tag    unsigned_short ;
  right_sidedef short ;
  left_sidedef  short
 """

@dataclass
class Linedef:
    begin_vert: int
    end_vert: int
    flags: int
    line_type: int
    sector_tag: int
    right_sidedef: int
    left_sidedef: int
    

SIDEDEF_SIZE = 30
SIDEDEF_FORMAT = """
  x_off          short ;
  y_off          short ;
  upper_texture  char[8] ;
  lower_texture  char[8] ;
  middle_texture char[8] ;
  sector_ref     unsigned_short
"""

@dataclass
class Sidedef:
    x_off: int
    y_off: int
    upper_texture: str
    lower_texture: str
    middle_texture: str
    sector_ref: int
    
VERTEX_SIZE = 4
VERTEX_FORMAT = """
  x short ;
  y short 
"""

@dataclass
class Vertex:
    x: int
    y: int

SEG_SIZE = 12
# could save one byte here
SEG_FORMAT = """
  begin_vert unsigned_short ;
  end_vert   unsigned_short ; 
  angle      short ;
  linedef    unsigned_short ;
  direction  short ;
  offset     short
"""

@dataclass
class Seg:
    begin_vert: int
    end_vert: int
    angle: int
    linedef: int
    direction: int
    offset: int

SSECTOR_SIZE = 4
# num_segs can likely be a single byte here, saving a byte
SSECTOR_FORMAT = """
  num_segs  short ;
  first_seg short
"""

@dataclass
class SSector:
    num_segs: int
    first_seg: int


NODE_SIZE = 28
# this is pretty big..
# if nodes were sorted, I think we could save 2 bytes here
NODE_FORMAT = """
  partition_x_coord    short ;
  partition_y_coord    short ;
  dx                   short ;
  dy                   short ;
  right_box_top        short ;
  right_box_bottom     short ;
  right_box_left       short ;
  right_box_right      short ;
  left_box_top         short ;
  left_box_bottom      short ;
  left_box_left        short ;
  left_box_right       short ;
  right_child unsigned_short ;
  left_child  unsigned_short
"""

@dataclass
class Node:
    partition_x_coord: int
    partition_y_coord: int
    dx: int
    dy: int
    right_box_top: int
    right_box_bottom: int
    right_box_left: int
    right_box_right: int
    left_box_top: int
    left_box_bottom: int
    left_box_left: int
    left_box_right: int
    right_child: int
    left_child: int


SECTOR_SIZE = 26
# could save a byte in light_level and sector_special
SECTOR_FORMAT = """
  floor_height            short ;
  ceiling_height          short ;
  floor_texture         char[8] ;
  ceil_texture          char[8] ;
  light_level             short ;
  sector_special unsigned_short ; 
  sector_tag     unsigned_short
"""

@dataclass
class Sector:
    floor_height: int
    ceiling_height: int
    floor_texture: str
    ceil_texture: str
    light_level: int
    sector_special: int
    sector_tag: int

THING_SIZE = 10
# could save a byte on flags, and maybe save a byte on thing type
# (are there more then 256 thing types?) 
THING_FORMAT = """
  x_pos       short ;
  y_pos       short ;
  angle       short ;
  thing_type  short ;
  flags       short
"""

@dataclass
class Thing:
    x_pos: int
    y_pos: int
    angle: int
    thing_type: int
    flags: int
    
    
def strip_zeros(s):
    i = s.find(b'\x00')
    if i == -1:
        return s.decode('ascii')
    return s[:i].decode('ascii')
    
    
    
    
counter = 0
def get_new_int():
    global counter
    res = counter
    counter += 1
    return res

def compile_format_string(fmt):
    
    
    struct_fmt = '<'
    format_map = {'short': ('h', 2),
          'unsigned_short': ('H', 2),
          'int':  ('i', 4),
          'unsigned_int': ('I', 4),
          'char[8]': ('8s', 8)}
    
    type_map = {'short': int,
                'unsigned_short': int,
                'int': int,
                'unsigned_int': int,
                'char[8]': str}
    
    parts = list(re.split('\s+', part.strip()) for part in fmt.split(';'))
    part_names = [part[0] for part in parts]
    total_size = 0

    for (name,typ) in parts:
        fmt,size = format_map[typ]
        struct_fmt += fmt
        total_size += size

        
    func_name = "parse_{}".format(get_new_int())
    
    func_code = "def {}(cur_idx, klass):\n".format(func_name)

    func_code += "    results = {}\n"
    func_code += "    parsed = struct.unpack_from(\"{}\", wad_data, cur_idx)\n".format(struct_fmt)
    for idx,part in enumerate(parts):
        name = part[0]
        typ = part[1]
        if 'char' in typ:
            func_code += "    {} = strip_zeros(parsed[{}])\n".format(
                name, idx)
        else:
            func_code += "    {} = parsed[{}]\n".format(name,idx)
    func_code += "    obj = klass({})\n".format(",".join(part_names))
    func_code += "    return obj, cur_idx+{}\n".format(total_size)

    
    
    exec(func_code)
    return eval(func_name)


parse_things = [
    (  'THINGS',   Thing,   THING_FORMAT,   THING_SIZE),
    ('LINEDEFS', Linedef, LINEDEF_FORMAT, LINEDEF_SIZE),
    ('SIDEDEFS', Sidedef, SIDEDEF_FORMAT, SIDEDEF_SIZE),
    ('VERTEXES',  Vertex,  VERTEX_FORMAT,  VERTEX_SIZE),
    (    'SEGS',     Seg,     SEG_FORMAT,     SEG_SIZE),
    ('SSECTORS', SSector, SSECTOR_FORMAT, SSECTOR_SIZE),
    (   'NODES',    Node,    NODE_FORMAT,    NODE_SIZE),
    ( 'SECTORS',  Sector,  SECTOR_FORMAT,  SECTOR_SIZE),
    #('  REJECT',  REJECT_FORMAT,  REJECT_SIZE)
    #('BLOCKMAP', BLOCKMAP_FORMAT, BLOCKMAP_SIZE)
]

compiled_parse_things = []

for (name,klass,format_string, size) in parse_things:
    parse_func = compile_format_string(format_string)
    compiled_parse_things.append((name, parse_func, klass, size))


def maybe_line_of_sight(src_sector_idx, dest_sector_idx, level):
    num_sectors = len(level['SECTORS'])
    bit_idx = (src_sector_idx * num_sectors) + dest_sector_idx

    byte_idx = int(bit_idx / 8)

    
    bit_pos = bit_idx % 8
    
    return (level['REJECT'][byte_idx] & (1 << bit_pos) == 0)


def get_subsector_sector_idx(subsector, level):
    first_seg = level['SEGS'][subsector.first_seg]
    return seg_sector_idx(first_seg, level)


def seg_sector_idx(seg, level):
    linedef = level['LINEDEFS'][seg.linedef]
    if seg.direction == 0:
        sidedef = level['SIDEDEFS'][linedef.right_sidedef]
    else:
        sidedef = level['SIDEDEFS'][linedef.left_sidedef]

    return sidedef.sector_ref

def portal_seg_other_sector_idx(seg, level):
    linedef = level['LINEDEFS'][seg.linedef]
    if seg.direction == 0:
        sidedef = level['SIDEDEFS'][linedef.left_sidedef]
    else:
        sidedef = level['SIDEDEFS'][linedef.right_sidedef]

    return sidedef.sector_ref

    

def read_level_data(level_dir):

    #blockmap   = level_dat['BLOCKMAP']

    results = {}
    for (key,compiled_parse_func,klass,thing_size) in compiled_parse_things:
        data = level_dir[key]
        cur_idx = data.ptr
        total_size = data.size
        
        num_things = total_size/float(thing_size)

        assert num_things == int(num_things)
        num_things = int(num_things)
        
        list_of_things = []
        for i in range(num_things):
            thing,cur_idx = compiled_parse_func(cur_idx, klass)
            list_of_things.append(thing)

        results[key] = list_of_things

    # read reject table
    num_sectors = len(results['SECTORS'])
    reject_table_num_bits = num_sectors*num_sectors
    reject_table_num_bytes = math.ceil(reject_table_num_bits/8.0)

    
    idx = level_dir['REJECT'].ptr
    reject_data = wad_data[idx:idx+reject_table_num_bytes]

    
    print("expected reject bits: {}".format(reject_table_num_bits))
    print("expected reject bytes: {}".format(reject_table_num_bytes))
    
    results['REJECT'] = reject_data #reject_bitvector
    
        
        
    
    return results

@dataclass(frozen=True, eq=True, repr=True)
class BaseSidedef():
    x_off: int
    y_off: int
    upper_texture: str
    lower_texture: str
    middle_texture: str

@dataclass(frozen=True, eq=True, repr=True)
class OptSidedef():
    base_sidedef_idx: int
    sector_ref: int

def copy_sidedef_without_sector_ref(sidedef):
    return BaseSidedef(sidedef.x_off,
                       sidedef.y_off,
                       sidedef.upper_texture,
                       sidedef.lower_texture,
                       sidedef.middle_texture)

            
            

def optimize_sidedefs(sidedefs):
    base_sidedefs_map = {}
    base_sidedefs_list = []
    
    idx = 0
    opt_sidedefs = set()
    
    for sidedef in sidedefs:
        base_sidedef = copy_sidedef_without_sector_ref(sidedef) #copy.copy(sidedef)
        sector_ref = sidedef.sector_ref
                
        if base_sidedef not in base_sidedefs_map:
            base_sidedefs_map[base_sidedef] = idx
            base_sidedefs_list.append(base_sidedef)
            idx += 1

        base_idx = base_sidedefs_map[base_sidedef]
        opt_sidedefs.add(OptSidedef(base_idx, sector_ref))

    
    #unique_sidedefs = set(opt_sidedefs)
    #print("num opt sidedefs {}".format(len(opt_sidedefs)))
    #print("num unique opt sidedefs {}".format(len(unique_sidedefs)))
    #sys.exit()
    base_size = 28 * len(base_sidedefs_list)
    unique_sidedefs_size = 4 * len(set(opt_sidedefs))

    return base_sidedefs_list, opt_sidedefs, (base_size + unique_sidedefs_size)

def level_names():
    res = []
    if is_doom_two:

        for i in range(1, 33):
            if i < 10:
                yield 'MAP0{}'.format(i)
                
            else:
                yield 'MAP{}'.format(i)
    else:
        for episode in episodes:
            for mission in missions:
                yield 'E{}M{}'.format(episode, mission)




parse_directory_entry = compile_format_string(DIRECTORY_ENTRY_FORMAT)


def read_directory():
    cur_idx = directory_index

    reading_level_data = False
    cur_level_data = {}
    
    for i in range(num_directory_entries):
        dir_entry,cur_idx = parse_directory_entry(cur_idx, Directory)
        name = dir_entry.name
                
        if is_level_name(name):
            reading_level_data = name
            cur_level_data = {}
        elif reading_level_data:
            cur_level_data[name] = dir_entry
            if name == 'BLOCKMAP':
                directory[reading_level_data] = cur_level_data
                reading_level_data = False
        else:
            directory[name] = dir_entry


def get_cachefile_name(wadfile):
    f = wadfile.split("/")[-1]
    return "./{}.cache".format(f.split(".wad")[0])
    
                
def read_wadfile(wadfile):
    cachefile = get_cachefile_name(wadfile)

    cachefile_exists = os.path.exists(cachefile) 
    if cachefile_exists:
        print("Loading previously dumped WAD")
        with open(cachefile, "rb") as f:
            return pickle.load(f)
            

    
    
    
    read_wad_data(wadfile)
    read_wad_header()
    read_directory()
    
    total_unoptimized_size = 0
    total_optimized_size = 0
    
    print("Reading level data", end='', flush=True)
        
    for level_name in level_names():
        level_directory = directory[level_name]
        level_data = read_level_data(level_directory)
        
        full_size = sum(d.size for d in level_directory.values())

        level_sidedefs = level_data['SIDEDEFS']
        base_sidedefs, opt_sidedefs, size = optimize_sidedefs(level_sidedefs)
        optimized_size = full_size
        optimized_size -= level_directory['SIDEDEFS'].size
        optimized_size += size
        
        total_unoptimized_size += full_size

        directory["{}_DATA".format(level_name)] = level_data
        
        #total_optimized_size += optimized_size
        print('.', end='', flush=True)
    print("")

    print("total unoptimized size: {}".format(total_unoptimized_size))
    #print("total optimized size: {}".format(total_optimized_size))
    
    if not cachefile_exists:
        print("Saving WAD")
        with open(cachefile, "wb") as f:
            pickle.dump((directory,is_doom_two), f)
    
    return directory,is_doom_two

