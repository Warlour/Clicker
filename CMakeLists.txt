cmake_minimum_required(VERSION 3.13)
project( AutoClicker )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src/headers)

add_executable( ${PROJECT_NAME} "src/main.cpp")

target_sources(${PROJECT_NAME} PRIVATE
    src/auto.cpp
    src/main.cpp
)

target_link_options(${PROJECT_NAME} PRIVATE -static-libgcc -static-libstdc++)

# Warning levels
target_compile_options( ${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic)