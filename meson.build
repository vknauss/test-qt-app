project('test-qt-app', 'cpp',
  default_options: {
    'cpp_std': 'c++20',
  })

qt = import('qt5')


executable('test-qt-app',
  dependencies: [
    dependency('Qt5Gui'),
    dependency('Qt5Widgets'),
  ],
  include_directories: [
  ],
  sources: [
    'main.cpp',
    qt.compile_resources(sources: [ 'resources/resources.qrc' ])
  ])
