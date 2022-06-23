project(
  'apf template',
  'cpp',
  version: '0.4.2',
  default_options: ['warning_level=3', 'cpp_std=c++17']
)


files = files(
  'src/main.cpp'
)

template = executable(
  'template',
  files,
  dependencies: [
    dependency('threads'),
    dependency('appframework')
  ]
)
