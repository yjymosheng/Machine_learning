cmake_minimum_required(VERSION 3.24)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)
IF(WIN32)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fexec-charset=GBK")
ENDIF()

add_executable(untitled1
        Rock-paper-scissors/main.c
        Rock-paper-scissors/lib.c
        Rock-paper-scissors/lib.h)

add_executable(file
        Rock-paper-scissors/rand_o_hand.c
        Rock-paper-scissors/lib.c
        Rock-paper-scissors/lib.h
        )

add_executable(Reinforcement_learning
        Reinforcement_learning/main.c
        Reinforcement_learning/lib.c
        Reinforcement_learning/lib.h)