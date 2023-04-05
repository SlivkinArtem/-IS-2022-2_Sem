cmake_minimum_required(VERSION 3.23)
project(progLab3)

set(CMAKE_CXX_STANDARD 14)

add_executable(progLab3 main.cpp src/Service/OperatorsOfMatrix.cpp src/Service/OperatorsOfMatrix.h src/Service/test.cpp src/App.cpp src/App.h src/Service/QueueOperations.cpp src/Service/QueueOperations.h)
