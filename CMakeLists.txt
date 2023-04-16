cmake_minimum_required(VERSION 3.10)

project(CTestSample)

include(CTest)

# Build the main executable
add_executable(main main.cpp)

# Build the test executable
add_executable(tests test1.cpp test2.cpp)

# Link the main executable to any necessary libraries
target_link_libraries(main PUBLIC)

# Configure CTest
enable_testing()
add_test(NAME MyTests COMMAND tests)

# Generate CTest XML report
set_property(TARGET tests PROPERTY CTEST_OUTPUT_ON_FAILURE ON)
set_property(TARGET tests PROPERTY CTEST_GENERATE_XML ON)
