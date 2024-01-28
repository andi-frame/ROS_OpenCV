cmake_minimum_required(VERSION 3.1)
project(openCV_stream)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

SET(OpenCV_DIR /installation/OpenCV-master/lib/cmake/opencv4)

find_package(OpenCV REQUIRED)
add_executable(openCV_stream main.cpp)
target_link_libraries(openCV_stream ${OpenCV_LIBS})