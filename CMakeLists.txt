cmake_minimum_required(VERSION 3.10)
project(calculator_project)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES calculator.cpp)

add_library(calculator_lib STATIC ${SOURCE_FILES})

add_executable(calculator_app main.cpp)
target_link_libraries(calculator_app calculator_lib)

