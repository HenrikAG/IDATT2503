cmake_minimum_required(VERSION 3.10)

project(task-2-c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")

add_executable(task-2-c main.c)
