AR = ['/usr/bin/ar']
ARFLAGS = ['rcs']
BINDIR = '/usr/local/bin'
CC = ['/usr/bin/gcc']
CCLNK_SRC_F = []
CCLNK_TGT_F = ['-o']
CC_NAME = 'gcc'
CC_SRC_F = []
CC_TGT_F = ['-c', '-o']
CC_VERSION = ('4', '8', '2')
CFLAGS_MACBUNDLE = ['-fPIC']
CFLAGS_PYEMBED = ['-fstack-protector', '-fwrapv']
CFLAGS_PYEXT = ['-fstack-protector', '-fwrapv']
CFLAGS_SOY = ['-pthread', '-pthread']
CFLAGS_cshlib = ['-fPIC']
COMPILER_CC = 'gcc'
CPPPATH_ST = '-I%s'
CXXFLAGS_PYEMBED = ['-fstack-protector', '-fwrapv']
CXXFLAGS_PYEXT = ['-fstack-protector', '-fwrapv']
CXXFLAGS_SOY = ['-pthread', '-pthread']
DEFINES = ['PYTHONDIR="/usr/lib/python3/dist-packages"', 'PYTHONARCHDIR="/usr/lib/python3/dist-packages"', 'HAVE_PYEMBED=1', 'HAVE_PYEXT=1', 'HAVE_PYTHON_H=1']
DEFINES_PYEMBED = ['HAVE_PYEMBED=1', 'NDEBUG']
DEFINES_PYEXT = ['HAVE_PYEXT=1', 'NDEBUG']
DEFINES_SOY = ['HAVE_SOY=1']
DEFINES_ST = '-D%s'
DEST_BINFMT = 'elf'
DEST_CPU = 'x86_64'
DEST_OS = 'linux'
HAVE_PYEMBED = 1
HAVE_PYEXT = 1
HAVE_SOY = 1
INCLUDES_PYEMBED = ['/usr/include/python3.4m']
INCLUDES_PYEXT = ['/usr/include/python3.4m']
INCLUDES_SOY = ['/usr/local/include', '/usr/include/glib-2.0', '/usr/lib/x86_64-linux-gnu/glib-2.0/include', '/usr/include/gee-0.8', '/usr/include/dbus-1.0', '/usr/include/librsvg-2.0', '/usr/include/nice', '/usr/lib/x86_64-linux-gnu/dbus-1.0/include', '/usr/include/gdk-pixbuf-2.0', '/usr/include/cairo', '/usr/include/libpng12', '/usr/include/pixman-1', '/usr/include/freetype2', '/usr/include/loudmouth-1.0']
LIBDIR = '/usr/local/lib'
LIBPATH_PYEMBED = ['/usr/lib/python3.4/config-3.4m-x86_64-linux-gnu', '/usr/lib']
LIBPATH_PYEXT = ['/usr/lib/python3.4/config-3.4m-x86_64-linux-gnu', '/usr/lib']
LIBPATH_SOY = ['/usr/local/lib']
LIBPATH_ST = '-L%s'
LIB_PYEMBED = ['pthread', 'dl', 'util', 'm', 'python3.4m']
LIB_PYEXT = ['pthread', 'dl', 'util', 'm', 'python3.4m']
LIB_SOY = ['soy', 'gee-0.8', 'dbus-glib-1', 'rsvg-2', 'm', 'loudmouth-1', 'idn', 'nice', 'gthread-2.0', 'GLESv2', 'dbus-1', 'gio-2.0', 'gdk_pixbuf-2.0', 'cairo', 'gobject-2.0', 'glib-2.0']
LIB_ST = '-l%s'
LINKFLAGS_MACBUNDLE = ['-bundle', '-undefined', 'dynamic_lookup']
LINKFLAGS_PYEMBED = ['-Xlinker', '-export-dynamic', '-Wl,-O1', '-Wl,-Bsymbolic-functions']
LINKFLAGS_PYEXT = ['-Xlinker', '-export-dynamic', '-Wl,-O1', '-Wl,-Bsymbolic-functions']
LINKFLAGS_SOY = ['-pthread', '-Wl,-export-dynamic', '-pthread']
LINKFLAGS_cshlib = ['-shared']
LINKFLAGS_cstlib = ['-Wl,-Bstatic']
LINK_CC = ['/usr/bin/gcc']
LINUX = 1
PACKAGE = 'pysoy'
PKGCONFIG = ['/usr/bin/pkg-config']
PREFIX = '/usr'
PYC = 1
PYFLAGS = ''
PYFLAGS_OPT = '-O'
PYO = 1
PYTAG = 'cpython-34'
PYTHON = ['/usr/bin/python3']
PYTHONARCHDIR = '/usr/lib/python3/dist-packages'
PYTHONDIR = '/usr/lib/python3/dist-packages'
PYTHON_CONFIG = ['/usr/bin/python3-config']
PYTHON_VERSION = '3.4'
RPATH_ST = '-Wl,-rpath,%s'
SHLIB_MARKER = '-Wl,-Bdynamic'
SONAME_ST = '-Wl,-h,%s'
STLIBPATH_ST = '-L%s'
STLIB_MARKER = '-Wl,-Bstatic'
STLIB_ST = '-l%s'
cprogram_PATTERN = '%s'
cshlib_PATTERN = 'lib%s.so'
cstlib_PATTERN = 'lib%s.a'
define_key = ['PYTHONDIR', 'PYTHONARCHDIR', 'HAVE_PYEMBED', 'HAVE_PYEXT', 'HAVE_PYTHON_H']
macbundle_PATTERN = '%s.bundle'
pyext_PATTERN = '%s.cpython-34m.so'