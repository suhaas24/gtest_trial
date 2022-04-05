cmake_minimum_required(VERSION 3.16.3)
project(calculatorv1)
add_library(
    mymath
    mymath.cpp
    mymath.hpp
)
add_executable(calculator Main.cpp )

target_link_libraries(calculator  mymath)

add_subdirectory(lib/googletest)
#Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)