cmake_minimum_required(VERSION 3.12)
project(openCV_stream)

find_package(OpenCV REQUIRED)

add_executable(openCV_stream main.cpp)

# Link OpenCV libraries
target_link_libraries(openCV_stream PRIVATE ${OpenCV_LIBS})

# Add include directories
target_include_directories(openCV_stream PRIVATE ${OpenCV_INCLUDE_DIRS})
