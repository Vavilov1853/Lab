
cmake_minimum_required(VERSION 2.8.4)
project(Laba_7)

set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(Laba_7 ${SOURCE_FILES})
target_link_libraries(Laba_7 m)