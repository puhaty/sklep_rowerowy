# clang:  CC=clang CXX=clang++ cmake .

# wersja cmake
cmake_minimum_required(VERSION 3.10)

# nazwa projektu
project(bike_shop)

# ustalenie czy budowana jest aplikacja tekstowa czy graficzna
SET(BUILD_GUI 0) # graficzny interfejs uzytkownika
SET(BUILD_TUI 1) # aplikacja uruchamiana z poziomu konsoli

if(BUILD_GUI AND BUILD_TUI)
    FATAL_ERROR("BUILD_GUI and BUILD_TUI cannot be defined simultanously.")
endif()

# utworzenie listy plikow kompilowanych w zaleznosci od typu projektu
if(BUILD_TUI)
    file(GLOB_RECURSE all_SRC "main_tui.cpp" "core/*.cpp" "tui/*.cpp")
endif()
if(BUILD_GUI)
    file(GLOB_RECURSE all_SRC "main_gui.cpp" "core/*.cpp" "gui/*.cpp")
endif()

# dodanie plikow wykonywalnych
add_executable(bike_shop ${all_SRC} )

include_directories(${PROJECT_SOURCE_DIR}/core/include)

# specyfikacja standardu jezyka C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

