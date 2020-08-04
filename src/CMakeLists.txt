cmake_minimum_required(VERSION 3.14)
project(EndianConverter C)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_library(EndianConverter EndianConverter.c EndianConverter.h)
target_link_libraries(EndianConverter ${CONAN_LIBS})