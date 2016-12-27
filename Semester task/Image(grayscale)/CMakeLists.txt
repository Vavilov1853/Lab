cmake_minimum_required(VERSION 2.8.4)
project(Image)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c qdbmp.c)

add_executable(Image ${SOURCE_FILES})