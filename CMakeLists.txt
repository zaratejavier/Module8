cmake_minimum_required(VERSION 3.8)
project(Module8)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES dynamicMem.cpp)
#set(SOURCE_FILES testStrClass.cpp Mystring.cpp Mystring.h)
#set(SOURCE_FILES dynamicIntArray.cpp)
#set(SOURCE_FILES Exception1.cpp)
#set(SOURCE_FILES DistanceException.cpp Distance.cpp Distance.h)
#set(SOURCE_FILES Const.cpp person.cpp person.h)
#set(SOURCE_FILES FreeStore.cpp Resource.cpp Resource.h )
#set(SOURCE_FILES memory.cpp person.cpp person.h Resource.h Resource.cpp)
#set(SOURCE_FILES max.cpp person.cpp person.h Resource.cpp Resource.h bankAccount.cpp bankAccount.h Accum.h)
set(SOURCE_FILES Accumulator.cpp Accum.h person.h person.cpp Resource.h Resource.cpp )



add_executable(Module8 ${SOURCE_FILES})