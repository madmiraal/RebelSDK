# Basic CMakeLists.txt for JetBrains IDEA users.
cmake_minimum_required(VERSION 4.0)
project(RebelSDK)

file(GLOB_RECURSE HEADERS include/**/*.h)
file(GLOB_RECURSE SOURCES src/**/*.cpp)
include_directories(.)
include_directories(include)
include_directories(include/api)
add_library(${PROJECT_NAME} STATIC ${SOURCES})
