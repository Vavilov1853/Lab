cmake_minimum_required(VERSION 2.8.4)
project(Laba_8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(Laba_8 ${SOURCE_FILES})
target_link_libraries(Laba_8 m)
target_link_libraries(Laba_8 -fopenmp)