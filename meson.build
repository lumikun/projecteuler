project('projecteuler', 'c',
                        license : 'WTFPL',
                        default_options : ['c_std=c11', 'buildtype=release'])


incdir = include_directories('include')
subdir('include')
subdir('src')
src = common_sources

exe = executable('euler', src, include_directories : incdir)
