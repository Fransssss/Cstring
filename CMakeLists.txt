cmake_minimum_required(VERSION 3.21)
project(Cstring)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cstring main.cpp Strcpy.h Strncpy.h StrCat.h StrnCat.h)
