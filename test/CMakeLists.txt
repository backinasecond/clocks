cmake_minimum_required(VERSION 3.14)
include_directories("../include")
include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.12.1
)

# This needs CMake 3.14+
FetchContent_MakeAvailable(Catch2)

add_library(test_main STATIC test_main.cpp)
target_link_libraries(test_main PUBLIC Catch2::Catch2)

add_executable(test_clock_12 test_clock_12.cpp)
target_link_libraries(test_clock_12 PRIVATE test_main project_warnings)
add_test(TestClock12 test_clock_12)

add_executable(test_clock_24 test_clock_24.cpp)
target_link_libraries(test_clock_24 PRIVATE test_main project_warnings)
add_test(TestClock24 test_clock_24)
