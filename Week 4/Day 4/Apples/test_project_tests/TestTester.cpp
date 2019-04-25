#include <gtest/gtest.h>
#include "myClass.h"

TEST(TestApples, StringIsCorrect) {
    myClass apples;

    ASSERT_EQ(apples.getApple(), "apple");

}

TEST(TestSum, SumIsCorrect) {
    myClass apples;

    std::vector<int> number = {1, 2, 3, 4, 5, 6, 7};

    ASSERT_EQ(apples.sumNumbers(number), 26);
}