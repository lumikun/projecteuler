project('projecteuler', 'c',
                        license : 'WTFPL',
                        default_options : ['c_std=c11', 'buildtype=release'])
if meson.get_compiler('c').get_id() == 'gcc'
   extra_args = ['-lm']
else
   extra_args = []
endif

incdir = include_directories('include')
subdir('include')
subdir('src')
src = common_sources

exe = executable('euler', src, include_directories : incdir, c_args : extra_args)
