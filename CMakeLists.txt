cmake_minimum_required(VERSION 3.29)
project(Printf C)

set(CMAKE_C_STANDARD 23)

add_executable(Printf main.c
        my_printf.h
        my_printf.c
)
