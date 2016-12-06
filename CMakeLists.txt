cmake_minimum_required(VERSION 3.5)
project(programmaesame1)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)

set(EXECUTABLE_NAME "Game")
set(SOURCE_FILES main.cpp Character.cpp Character.h Player.cpp Player.h Enemy.cpp Enemy.h Bullets.cpp Bullets.h Item.cpp Item.h Block.cpp Block.h)
add_executable(${EXECUTABLE_NAME} main.cpp)

add_library(core ${SOURCE_FILES})
target_link_libraries(Game core)