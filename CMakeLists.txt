cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add src files
add_library(calculator src/calculator.cpp)

# Add executable for testing
add_executable(test_calculator test/test_calculator.cpp)

# Link the calculator library with the test executable
target_link_libraries(test_calculator calculator)

# Link Google Test if installed
find_package(GTest REQUIRED)
target_link_libraries(test_calculator GTest::GTest GTest::Main)
enable_testing()
add_test(NAME CalculatorTests COMMAND test_calculator)
