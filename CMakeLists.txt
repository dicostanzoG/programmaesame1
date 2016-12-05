cmake_minimum_required(VERSION 3.5)
project(programmaesame1)

add_subdirectory(test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Character.cpp Character.h Player.cpp Player.h Enemy.cpp Enemy.h Bullets.cpp Bullets.h Item.cpp Item.h Block.cpp Block.h)
add_executable(programmaesame1 ${SOURCE_FILES})