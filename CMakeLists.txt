cmake_minimum_required(VERSION 3.8)
project(Module8)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES dynamicMem.cpp)
#set(SOURCE_FILES testStrClass.cpp Mystring.cpp Mystring.h)
#set(SOURCE_FILES dynamicIntArray.cpp)
#set(SOURCE_FILES Exception1.cpp)
#set(SOURCE_FILES DistanceException.cpp Distance.cpp Distance.h)
#set(SOURCE_FILES Const.cpp person.cpp person.h)
set(SOURCE_FILES FreeStore.cpp Resource.cpp Resource.h )






add_executable(Module8 ${SOURCE_FILES})