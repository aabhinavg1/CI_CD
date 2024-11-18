// test_calculator.cpp
#include "../src/calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorTest, AddTest) {
    Calculator calculator;
    EXPECT_EQ(calculator.add(2, 3), 5);
    EXPECT_EQ(calculator.add(-1, 1), 0);
}

TEST(CalculatorTest, SubtractTest) {
    Calculator calculator;
    EXPECT_EQ(calculator.subtract(5, 3), 2);
    EXPECT_EQ(calculator.subtract(3, 5), -2);
}

TEST(CalculatorTest, MultiplyTest) {
    Calculator calculator;
    EXPECT_EQ(calculator.multiply(2, 3), 6);
    EXPECT_EQ(calculator.multiply(-1, 3), -3);
}

TEST(CalculatorTest, DivideTest) {
    Calculator calculator;
    EXPECT_EQ(calculator.divide(6, 3), 2);
    EXPECT_THROW(calculator.divide(1, 0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
