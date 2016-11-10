cmake_minimum_required(VERSION 2.8.4)
project(Laba_5)

set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c 90")

set(SOURCE_FILES main.c)
add_executable(Laba_5 ${SOURCE_FILES})
target_link_libraries(Laba_5 m)