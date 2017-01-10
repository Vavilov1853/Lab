cmake_minimum_required(VERSION 2.8.4)
project(Blur)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c qdbmp.c)
add_executable(Blur ${SOURCE_FILES})