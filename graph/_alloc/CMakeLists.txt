cmake_minimum_required(VERSION 3.0.0)
project(graphs VERSION 0.1.0 LANGUAGES C)

add_library(_alloc STATIC _alloc.c _alloc.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
