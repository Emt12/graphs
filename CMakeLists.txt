cmake_minimum_required(VERSION 3.0.0)
project(graphs VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_subdirectory(vector)
add_subdirectory(graph)
add_subdirectory(datatype)

add_executable(graphs main.c)
target_link_libraries(graphs vector graph datatype)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
