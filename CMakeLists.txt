cmake_minimum_required(VERSION 3.5)


project(Johannes)

set(CMAKE_CXX_FLAGS "--std=c++17 -Wall -g -Wextra")

add_executable(Chess main.cpp State.cpp Piece.cpp)
