cmake_minimum_required(VERSION 3.25.1)
project(dynamic-strings VERSION 0.1.0)
include(CTest)
enable_testing()

file(GLOB SOURCES "src/*.c")
add_executable(dynamic-strings ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
