cmake_minimum_required(VERSION 3.17)
project(test-cmake C)

set(CMAKE_C_STANDARD 99)
#set(CMAKE_CXX_FLAGS -lm)

set(SOURCE_FILES main.c)

add_executable(test-cmake ${SOURCE_FILES})
target_link_libraries(test-cmake # -lm やら色々はここに書く
        PUBLIC m
)
target_compile_options(test-cmake
        PUBLIC -O0
        PUBLIC -Wall
        )
