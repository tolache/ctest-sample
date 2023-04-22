cmake_minimum_required(VERSION 3.10)

project(CTestSample)

include(CTest)

# Build the main executable
add_executable(main main.cpp)

# Build the test executable
add_executable(tests1 test1.cpp)
add_executable(tests2 test2.cpp)
add_executable(tests3 test3.cpp)

# Link the main executable to any necessary libraries
target_link_libraries(main PUBLIC)

# Configure CTest
enable_testing()
add_test(NAME MyTests1 COMMAND tests1)
add_test(NAME MyTests2 COMMAND tests2)
add_test(NAME MyTests3 COMMAND tests3)

# Generate CTest XML report
set_property(TARGET tests1 PROPERTY CTEST_OUTPUT_ON_FAILURE ON)
set_property(TARGET tests1 PROPERTY CTEST_GENERATE_XML ON)
set_property(TARGET tests2 PROPERTY CTEST_OUTPUT_ON_FAILURE ON)
set_property(TARGET tests2 PROPERTY CTEST_GENERATE_XML ON)
set_property(TARGET tests3 PROPERTY CTEST_OUTPUT_ON_FAILURE ON)
set_property(TARGET tests3 PROPERTY CTEST_GENERATE_XML ON)