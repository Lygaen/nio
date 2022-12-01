cmake_minimum_required(VERSION 3.0.0)
project(nio VERSION 0.1.0)

option(NIO_ENABLE_TESTING "Enable testing for nio" TRUE)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)
add_library(nio ${SOURCES})
add_library(nio::nio ALIAS nio)
target_include_directories(nio PUBLIC include/)

if(NIO_ENABLE_TESTING)
    include(CTest)
    enable_testing()
    add_subdirectory(tests/)
endif()