cmake_minimum_required(VERSION 3.10)
project(ppdb
    VERSION 1.0
    DESCRIPTION "A simple C++ database library"
    LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(third_party/abseil-cpp)
add_subdirectory(third_party/spdlog)
add_subdirectory(third_party/magic_enum)

option(PPDB_ENABLE_TEST OFF)
if (PPDB_ENABLE_TEST)
    enable_testing()
    add_subdirectory(third_party/googletest)
endif()

add_subdirectory(src)