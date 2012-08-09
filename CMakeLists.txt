project(CPACK_MULTI)
cmake_minimum_required(VERSION 2.8)

add_subdirectory(demo1)
add_subdirectory(demo2)

add_executable(demo src/main.c)
target_link_libraries(demo demo1 demo2)

# Package 1: 
set(BUILD_DIR ${CMAKE_CURRENT_BINARY_DIR}/packages/demo1)
include(${PROJECT_BINARY_DIR}/demo1/manifest.txt)
configure_file(packages/package-demo1.txt ${BUILD_DIR}/CMakeLists.txt @ONLY)
add_custom_target(package-demo1 COMMAND ${CMAKE_COMMAND} . 
                                COMMAND ${CMAKE_CPACK_COMMAND} -G DEB
                                COMMAND cp *.deb ${PROJECT_BINARY_DIR} 
                                WORKING_DIRECTORY ${BUILD_DIR})

# Package 2: 
set(BUILD_DIR ${CMAKE_CURRENT_BINARY_DIR}/packages/demo2)
include(${PROJECT_BINARY_DIR}/demo2/manifest.txt)
configure_file(packages/package-demo2.txt ${BUILD_DIR}/CMakeLists.txt @ONLY)
add_custom_target(package-demo2 COMMAND ${CMAKE_COMMAND} . 
                                COMMAND ${CMAKE_CPACK_COMMAND} -G DEB
                                COMMAND cp *.deb ${PROJECT_BINARY_DIR} 
                                WORKING_DIRECTORY ${BUILD_DIR})

# All packages
add_custom_target(deb DEPENDS package-demo1 package-demo2)
