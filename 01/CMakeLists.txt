cmake_minimum_required(VERSION 3.0)
project(leptjson_test C)

add_library(leptjson leptjson.c)
add_executable(leptjson_test test.c)
target_link_libraries(leptjson_test leptjson)
