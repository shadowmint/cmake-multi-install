project(CPACK_DEMO2)
cmake_minimum_required(VERSION 2.8)

file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*)
add_library(demo2 SHARED ${SOURCES})

get_property(TARGET_LIBS TARGET demo2 PROPERTY LOCATION)
file(GLOB_RECURSE TARGET_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/manifest.txt.in ${CMAKE_CURRENT_BINARY_DIR}/manifest.txt)
