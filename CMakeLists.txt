cmake_minimum_required(VERSION 2.8)

set (PROJECT spc)
project({PROJECT})

set (SRC ./src)
set (INC ./inc)

set (DICTIONARY
    ${INC}/dictionary.h
    ${SRC}/dictionary.cpp)

set (MAIN
    ${SRC}/main.cpp)
 
set (ERROR
    ${INC}/error.h)
 
add_executable (${PROJECT} ${MAIN} ${DICTIONARY})

