cmake_minimum_required(VERSION 3.0.0)
project(niot-test VERSION 0.1.0)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(googletest/)
include(GoogleTest)

function(build_test TEST_NAME)
    add_executable(${TEST_NAME}-test ${TEST_NAME}.cpp)
    target_link_libraries(${TEST_NAME}-test PUBLIC gtest_main nio)
    gtest_discover_tests(${TEST_NAME}-test)
endfunction()

build_test(sizes)