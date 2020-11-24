project('vs2019_custom_target', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

my_subproject_dep = subproject('my_subproject').get_variable('my_subproject_dep')

exe = executable('vs2019_custom_target', 'vs2019_custom_target.c',
  dependencies: my_subproject_dep)
