cmake_minimum_required(VERSION 3.0)
cmake_policy(SET CMP0076 NEW)
project(board LANGUAGES C)
SET(VALUE CACHE STRING "")
add_library(${PROJECT_NAME} SHARED "")
target_sources(${PROJECT_NAME} PUBLIC board.c board.h)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} INTERFACE m)
target_compile_definitions(${PROJECT_NAME} PUBLIC USING_LIB=${VALUE})
install(TARGETS ${PROJECT_NAME})
install(FILES board.h DESTINATION include)