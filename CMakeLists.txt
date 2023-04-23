cmake_minimum_required(VERSION 3.26)

project(GOL)

find_library(COCOA_LIBRARY Cocoa)
find_library(OPENGL_LIBRARY OpenGL)
find_library(GLFW_LIBRARY glfw3)

add_executable(gol src/main.c)
target_link_libraries(gol ${COCOA_LIBRARY}  ${GLFW_LIBRARY} ${OPENGL_LIBRARY})

