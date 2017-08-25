project(cpp14_on_travis)
cmake_minimum_required(VERSION 2.8)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CXX_STANDARD 14)
message(cmake cxx flags: ${CMAKE_CXX_FLAGS})
message(cxx flags: ${CXX_FLAGS})

add_executable(hello main.cpp)
