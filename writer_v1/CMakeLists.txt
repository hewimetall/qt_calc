cmake_minimum_required(VERSION 3.24)
project(writer)
include(ExternalProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "c_libs/*.c")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(writer main.cpp main_win.cpp grid.cpp)
add_library(s21_valid STATIC)
target_sources(s21_valid
        PRIVATE
        ${SOURCES}
        )

target_link_libraries(writer
        Qt::Core
        Qt::Gui
        Qt::Widgets
        s21_valid
        )
