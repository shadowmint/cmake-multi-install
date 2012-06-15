project(CPACK_DEMO2)
cmake_minimum_required(VERSION 2.8)

file(GLOB_RECURSE FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*")

install(FILES ${FILES} DESTINATION "tmp/" COMPONENT DEMO2) 

set(CPACK_PACKAGE_NAME "Demo2")
set(CPACK_PACKAGE_CONTACT "linderd@staff.iinet.net.au")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Demo package")

# TODO: Set package base
#       Set architecture
#       Set depends

include(CPack)
