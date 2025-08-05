#include <gtest/gtest.h>
extern "C" {
    #include "mylib.h"
}

TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(3, 4), 7);
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -5), -7);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
