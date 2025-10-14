cmake_minimum_required(VERSION 4.0)
project(Karel C)

set(CMAKE_C_STANDARD 11)

# Папки з include-файлами
include_directories(
        ${CMAKE_SOURCE_DIR}/libs/PDCurses-3.9
        ${CMAKE_SOURCE_DIR}/libs/karel-the-robot-master/include
        C:/msys64/mingw64/include
)

# Папки з бібліотеками
link_directories(
        ${CMAKE_SOURCE_DIR}/libs/PDCurses-3.9/wincon
        C:/msys64/mingw64/lib
)

# Бібліотека Карела
add_library(karel
        libs/karel-the-robot-master/src/karel.c
        libs/karel-the-robot-master/src/internals.c
        libs/karel-the-robot-master/src/superkarel.c
)

# Головна програма
add_executable(Karel main.c)

# Лінкування
target_link_libraries(Karel
        karel
        ${CMAKE_SOURCE_DIR}/libs/PDCurses-3.9/wincon/pdcurses.a
        intl
        iconv
)
