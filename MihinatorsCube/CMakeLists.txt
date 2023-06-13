cmake_minimum_required(VERSION 3.23)
project(MihinatorsCube)

set(CMAKE_CXX_STANDARD 14)

add_executable(MihinatorsCube main.cpp components.cpp components.h cube.cpp cube.h)

target_link_libraries(MihinatorsCube -lOpenGL32 -lfreeGLUT -lglu32)

find_package(OpenGL REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR})