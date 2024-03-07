cmake_minimum_required(VERSION 3.5)

project(Johannes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g -Wextra")

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

add_executable(Chess main.cpp State.cpp Piece.cpp Square.cpp)
target_link_libraries(Chess PRIVATE sfml-graphics)

