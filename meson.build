project('apf template', 'cpp',
  version : '0.4.1',
  default_options : ['warning_level=3', 'cpp_std=c++17']
)

# get apf dependency.
apf_dep = subproject('appframework').get_variable('apf_dep')

files = files('src/main.cpp')

# create executable with apf dependency
template = executable('template', files, dependencies: [dependency('threads'), apf_dep] )
