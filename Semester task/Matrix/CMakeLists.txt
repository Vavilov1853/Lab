cmake_minimum_required(VERSION 2.8.4)
project(SAXPY)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(Matrix ${SOURCE_FILES})
target_link_libraries(Matrix m)
target_link_libraries(Matrix -fopenmp)