cmake_minimum_required(VERSION 3.20)
project(ProjectC__)
set(CMAKE_CXX_STANDARD 14)
file(GLOB APP_SOURCES *.cpp */*.cpp)
foreach (testsourcefile ${APP_SOURCES})
    get_filename_component(testname ${testsourcefile} NAME_WE)
    message("${testname}")
    add_executable(${testname} ${testsourcefile} 4_1/4_1.cpp)
endforeach (testsourcefile ${APP_SOURCES})