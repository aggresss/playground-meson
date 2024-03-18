project('catch2-demo',
  ['c', 'cpp'],
  default_options : [
    'warning_level=1',
    'cpp_std=c++17',
    'default_library=static',
  ],)

catch2_proj = subproject(
  'catch2',
  default_options: [
    'warning_level=0',
  ],
)

catch2_demo = executable(
  'catch2_demo',
  dependencies: [
    catch2_proj.get_variable('catch2_dep'),
  ],
  sources: ['main.cpp'],
)

test(
  'catch2_demo',
  catch2_demo,
  workdir: meson.project_source_root(),
)
