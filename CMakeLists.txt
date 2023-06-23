cmake_minimum_required(VERSION 3.21)
project(EDyA1_pila C)

set(CMAKE_C_STANDARD 11)
set(Header pila.h)
add_executable(EDyA1.pila ${PROJECT_SOURCE_DIR} / main.c pila.c)

