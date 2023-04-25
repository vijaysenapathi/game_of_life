add_library(GraphicsLib)

target_sources(
    GraphicsLib
    PUBLIC
      windows.c
  )

find_library(COCOA_LIBRARY Cocoa)
find_library(OPENGL_LIBRARY OpenGL)
find_library(GLFW_LIBRARY glfw)

target_link_libraries(GraphicsLib ${COCOA_LIBRARY}  ${GLFW_LIBRARY} ${OPENGL_LIBRARY})
target_include_directories(GraphicsLib PUBLIC "${CMAKE_SOURCE_DIR}/include")

