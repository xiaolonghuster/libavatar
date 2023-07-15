cmake_minimum_required(VERSION 3.23)
project(libavatar)

set(CMAKE_CXX_STANDARD 11)

set(INC_DIR ./include)
set(SRC_DIR source)

include_directories(${INC_DIR})
#add_executable(libavatar main.cpp include/avatar_library.h source/avatar.cpp)
add_library(libavatar SHARED source/avatar.cpp)