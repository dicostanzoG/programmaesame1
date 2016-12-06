cmake_minimum_required(VERSION 3.5)

add_subdirectory( ./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(EXECUTABLE_NAME "runAllTests")
set(TEST_SOURCE_FILES PlayerTest.cpp)
add_executable(${EXECUTABLE_NAME} runAllTests.cpp PlayerTest.cpp EnemyTest.cpp)
target_link_libraries(runAllTests gtest gtest_main core)