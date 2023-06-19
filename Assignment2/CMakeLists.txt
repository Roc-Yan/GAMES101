cmake_minimum_required(VERSION 3.17)
project(Assignment2)

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 14)

include_directories(/usr/local/include)

add_executable(Assignment2 main.cpp rasterizer.hpp rasterizer.cpp Triangle.hpp Triangle.cpp)
target_link_libraries(Assignment2 ${OpenCV_LIBRARIES})