cmake_minimum_required(VERSION 3.17)
project(Introduction)

set(CMAKE_CXX_STANDARD 20)

add_compile_options(-Wall -Wextra -pedantic -Werror)

add_executable(Introduction main.cpp)