cmake_minimum_required(VERSION 3.24)
project(CPP_Playground)

set(CMAKE_CXX_STANDARD 17)

add_executable(myfirst myfirst.cpp)
add_executable(hello_1 hello_1.cpp)
add_executable(hello_prompt hello_prompt.cpp)

add_executable(assignment_2 assignment_2/hello_driver.cpp assignment_2/hello_interface.cpp assignment_2/hello_interface.h)

add_executable(assignment_3 assignment_3/EnglishWeight.cpp assignment_3/EnglishWeight.h assignment_3/EW_Driver.cpp)

