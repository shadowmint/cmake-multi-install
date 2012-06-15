project(CPACK_MULTI)
cmake_minimum_required(VERSION 2.8)

add_subdirectory("demo1")
add_subdirectory("demo2")

set(CPACK_PACKAGE_NAME "Demo3")
set(CPACK_PACKAGE_CONTACT "linderd@staff.iinet.net.au")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Demo package")
set(CPACK_COMPONENTS_ALL DEMO1 DEMO2)
set(CPACK_DEB_COMPONENT_INSTALL ON)

include(CPack)
