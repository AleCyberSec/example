cmake_minimum_required(VERSION 3.10)

project(PasswordGenerator VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(password_generator
    src/main.cpp
    src/PasswordGenerator.cpp
)
