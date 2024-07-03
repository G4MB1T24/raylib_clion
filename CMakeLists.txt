cmake_minimum_required(VERSION 3.28)
project(${project_name})

set(CMAKE_CXX_STANDARD 17)

add_executable(sim1 main.cpp)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Link directories
link_directories(${CMAKE_SOURCE_DIR}/lib)

# Link libraries
#target_link_libraries(sim1 libraylib.a)
target_link_libraries(${project_name} PRIVATE raylib winmm)
