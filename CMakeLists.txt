cmake_minimum_required(VERSION 3.10)

project(aero_calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(include)

set(SOURCES
    src/main.cpp
    src/AerodynamicsCalculation.cpp
)


add_executable(aero_calculator ${SOURCES})

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(aero_calculator PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()
