project('apf template', 'c', 'cpp',
  version : '0.3.0',
  default_options : ['warning_level=3', 'c_std=c17', 'cpp_std=c++17'],
  license : 'MIT')

# get appframework subproject and get dependency from it
apf_proj = subproject('appframework')
apf_dep = apf_proj.get_variable('apf_dep')

files = files('src/main.cpp')

# create executable with apf dependency
template = executable('template', files, dependencies: [dependency('threads'), apf_dep] )