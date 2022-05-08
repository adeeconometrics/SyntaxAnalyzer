cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(cpplox)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(cpplox ${SRC_FILES})

target_include_directories(cpplox PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)