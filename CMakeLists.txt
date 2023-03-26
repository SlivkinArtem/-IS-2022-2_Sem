cmake_minimum_required(VERSION 3.23)
project(progLab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(progLab4 main.cpp EquilateralTriangle.cpp EquilateralTriangle.h IGeoFig.h CVector2D.h IPhysObject.h IPrintable.h DialogInitiable.h BaseCObject.h Parallelogram.cpp Parallelogram.h)
