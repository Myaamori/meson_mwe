project('freetype2_link_fail', 'c')

freetype2_dep = subproject('freetype2').get_variable('freetype2_dep')

exe = executable('freetype2_link_fail', 'freetype2_link_fail.c', dependencies: freetype2_dep)
