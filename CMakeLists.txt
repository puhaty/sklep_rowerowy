# clang:  CC=clang CXX=clang++ cmake .

# Cmake Version control
cmake_minimum_required(VERSION 3.10)

# additional compiler flags
add_compile_options(-Wall -Wextra)

# include directories
include_directories(include)

# project name
project(BAJKSZOP)

# source files
file(GLOB SOURCE "src/*.cpp")

# object files library
add_library(obj OBJECT ${SOURCE})

# exec
add_executable(bike_shope.exe $<TARGET_OBJECTS:obj>)

# specyfikacja standardu jezyka C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)