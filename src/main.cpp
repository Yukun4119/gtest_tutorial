#include <iostream>
#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST(testCase1, add_1_and_1) {
    EXPECT_EQ(add(1,1), 2);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
