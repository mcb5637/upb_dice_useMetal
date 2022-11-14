cmake_minimum_required(VERSION 3.18)
project(use_metall)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

# fmt
find_package(fmt REQUIRED)

# boost
find_package(Boost REQUIRED)

# metall is not available from conan
# todo include metall, e.g. via FetchContent_Declare https://cmake.org/cmake/help/latest/module/FetchContent.html

add_executable(write_data write_data.cpp)
target_link_libraries(write_data
fmt::fmt
Boost::Boost
)

add_executable(read_data read_data.cpp)
target_link_libraries(read_data
fmt::fmt
Boost::Boost
)
