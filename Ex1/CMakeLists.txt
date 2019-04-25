cmake_minimum_required (VERSION 2.8.9)
project(ex1)

add_definitions("-std=c++0x -O2 -g3")

find_package(OpenCV 3 REQUIRED core imgproc video highgui imgcodecs)


file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/Variants/*.cpp
                  ${PROJECT_SOURCE_DIR}/main.cpp)

include_directories(${PROJECT_SOURCE_DIR}/)

add_executable(ex1 ${SOURCES})
target_link_libraries(ex1 ${OpenCV_LIBS})
