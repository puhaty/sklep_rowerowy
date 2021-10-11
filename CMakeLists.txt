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

# dodanie opcji graficznych zwiazanych z Qt
if(BUILD_GUI)
    SET(CMAKE_PREFIX_PATH "C:/Qt/5.12.3/msvc2017_64/lib/cmake/Qt5")

    set(CMAKE_AUTOMOC ON)
    set(CMAKE_AUTORCC ON)
    set(CMAKE_AUTOUIC ON)
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

include_directories(${PROJECT_SOURCE_DIR}/core)

if(BUILD_TUI)
    include_directories(${PROJECT_SOURCE_DIR}/tui)
endif()
if(BUILD_GUI)
    include_directories(${PROJECT_SOURCE_DIR}/gui)
endif()

# linkowanie bibliotek Qt oraz kopiowanie plikow dll
if(BUILD_GUI)
    target_link_libraries( bike_shop ${QT_LIBRARIES} )
    find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
    target_link_libraries(bike_shop Qt5::Core)
    target_link_libraries(bike_shop Qt5::Gui)
    target_link_libraries(bike_shop Qt5::Widgets)

    add_custom_command(TARGET bike_shop POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Core> $<TARGET_FILE_DIR:bike_shop>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Gui> $<TARGET_FILE_DIR:bike_shop>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Widgets> $<TARGET_FILE_DIR:bike_shop>
    )
endif()


#folder gdzie bedzie sie wywolywal program
SET_PROPERTY(TARGET bike_shop PROPERTY RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
ADD_CUSTOM_TARGET(run COMMAND bike_shop WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# specyfikacja standardu jezyka C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    TARGET_LINK_LIBRARIES(bike_shop stdc++fs)
endif()