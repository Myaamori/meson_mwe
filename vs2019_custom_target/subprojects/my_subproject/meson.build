project('my_subproject', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

nasm = find_program('nasm')
asm_sources = ['my_test.asm']
asm_gen = generator(nasm,
                    output: '@BASENAME@.o',
                    arguments: ['-f', 'win64', '@INPUT@', '-o', '@OUTPUT@'])
gen_objects = asm_gen.process(asm_sources)

static_lib = static_library('my_subproject-static', ['my_subproject.c', gen_objects])

lib = library('my_subproject', objects: static_lib.extract_all_objects())

# Make this library usable as a Meson subproject.
my_subproject_dep = declare_dependency(
  include_directories: include_directories('.'),
  link_with : lib)
