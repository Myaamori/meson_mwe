project('default_options_override', 'c')

a_dep = subproject('a').get_variable('a_dep')

exe = executable('default_options_override', 'default_options_override.c', dependencies: a_dep)
