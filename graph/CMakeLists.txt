cmake_minimum_required(VERSION 3.0.0)
project(graphs VERSION 0.1.0 LANGUAGES C)

add_subdirectory(_graph)
add_subdirectory(_alloc)
add_library(graph STATIC graph.c graph.h)
target_link_libraries(graph _graph _alloc)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
