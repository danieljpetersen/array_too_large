cmake_minimum_required(VERSION 3.1)

set(PROJECT_NAME "array_too_large")
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} src/main.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(FLECS
        GIT_REPOSITORY https://github.com/SanderMertens/flecs.git)
FetchContent_MakeAvailable(FLECS)

target_link_libraries(${PROJECT_NAME} flecs::flecs_static)
