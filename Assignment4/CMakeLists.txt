cmake_minimum_required(VERSION 3.17)
project(Assignment4)

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment4 main.cpp)
target_link_libraries(Assignment4 ${OpenCV_LIBRARIES})