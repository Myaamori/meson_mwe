project('a', 'c',
    default_options: ['default_library=both'])

lib = library('a', 'a.c')

a_dep = declare_dependency(
  include_directories : include_directories('.'),
  link_with : lib)
