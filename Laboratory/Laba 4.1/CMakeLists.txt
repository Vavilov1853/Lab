cmake_minimum_required(VERSION 2.8.4)
project(untitled4)

set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(untitled4 ${SOURCE_FILES})
target_link_libraries(untitled4 m)