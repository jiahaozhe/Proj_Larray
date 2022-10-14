cmake_minimum_required(VERSION 3.20)
project(Proj_Larray C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Proj_Larray
        larray.c
        larray.h
        main.c
        "self_adjusting lists.c"
        Self_adjusting.c)
