cmake_minimum_required(VERSION 3.8)
project(Module8)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES dynamicMem.cpp)
#set(SOURCE_FILES testStrClass.cpp Mystring.cpp Mystring.h)
set(SOURCE_FILES dynamicIntArray.cpp)


add_executable(Module8 ${SOURCE_FILES})