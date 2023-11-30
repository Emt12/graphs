cmake_minimum_required(VERSION 3.0.0)
project(graphs VERSION 0.1.0 LANGUAGES C)

add_subdirectory(_char-vect)
add_subdirectory(_int-vect)
add_library(vector STATIC  vector.h vector.c)
target_link_libraries(vector _char-vect _int-vect)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
