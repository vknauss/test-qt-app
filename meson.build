project('test-qt-app', 'cpp',
  default_options: {
    'cpp_std': 'c++20',
    'b_pie': true,
  })

qt = import('qt6')


executable('test-qt-app',
  dependencies: [
    dependency('qt6', modules: [ 'Core', 'Widgets' ]),
  ],
  include_directories: [
  ],
  sources: [
    'main.cpp',
    qt.compile_resources(sources: [ 'resources/resources.qrc' ])
  ])
