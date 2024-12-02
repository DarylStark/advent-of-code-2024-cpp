cmake_minimum_required(VERSION 3.20)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set variables
set(PROJECT_NAME advent-of-code-2024-cpp)
set(PROJECT_VERSION 0.0.1)
set(EXECUTABLE_NAME ${PROJECT_NAME})

# Project name
project(${PROJECT_NAME} VERSION ${PROJECT_VERSION})

# Set the C++ files to compile
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Define the executable
add_executable(${EXECUTABLE_NAME} ${SOURCES})

