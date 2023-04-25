cmake_minimum_required(VERSION 3.25)

project(GOL)


add_executable(gol src/main.c)
add_subdirectory(src/graphics)
#target_include_directories(gol PUBLIC "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(gol GraphicsLib)
