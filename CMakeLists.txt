cmake_minimum_required(VERSION 3.24)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)
IF(WIN32)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fexec-charset=GBK")
ENDIF()

add_executable(untitled1
        main.c lib.c lib.h)

add_executable(file
        rand_o_hand.c lib.c lib.h
        )