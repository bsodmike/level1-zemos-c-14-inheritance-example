cmake_minimum_required(VERSION 3.7)
project(level1_inheritance_example)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp src/core/Component.cpp src/core/Component.h src/core/Cog.cpp src/core/Cog.h)
add_executable(level1_inheritance_example ${SOURCE_FILES})