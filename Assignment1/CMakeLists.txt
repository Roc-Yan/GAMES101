cmake_minimum_required(VERSION 3.17)
project(Assignment1)

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 14)
include_directories(/usr/local/include)

add_executable(Assignment1 main.cpp rasterizer.hpp rasterizer.cpp Triangle.hpp Triangle.cpp)
target_link_libraries(Assignment1 ${OpenCV_LIBRARIES})