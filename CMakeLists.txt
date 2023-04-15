cmake_minimum_required(VERSION 3.0)

project(test_project)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_executable(tests test.cpp)

add_test(NAME Test1 COMMAND tests 1)
add_test(NAME Test2 COMMAND tests 2)

set_tests_properties(Test1 Test2 PROPERTIES TIMEOUT 10)

if (WIN32)
    set(CTEST_CUSTOM_POST_TEST "echo custom command")
else()
    set(CTEST_CUSTOM_POST_TEST "echo custom command")
endif()

add_custom_target(tests COMMAND ${CMAKE_CTEST_COMMAND} -T Test)