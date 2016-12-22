cmake_minimum_required(VERSION 2.8.4)
project(SAXPY)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(SAXPY ${SOURCE_FILES})
target_link_libraries(SAXPY -fopenmp)