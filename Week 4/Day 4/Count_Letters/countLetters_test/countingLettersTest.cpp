#include "gtest/gtest.h"
#include "countingLetters.h"
#include <map>

TEST(TestDictionary, SeeIfMapIsReady) {
//Arrange
    countingLetters letters;
    letters.word = "STAND";

//Act
    std::map<std::string, int> myMap = letters.makingDictionary(letters.word);

//Assert
    ASSERT_EQ(myMap["S"], 1);
    ASSERT_EQ(myMap["T"], 1);
    ASSERT_EQ(myMap["A"], 1);
    ASSERT_EQ(myMap["N"], 1);
    ASSERT_EQ(myMap["D"], 1);
}
TEST(TestDictionary, SeeIfMapIsReady2)
{
    countingLetters letters;
    letters.word = "CHASSIS";

    //Act
    std::map<std::string, int> myMap = letters.makingDictionary(letters.word);

    //Assert
    ASSERT_EQ(myMap["C"],1);
    ASSERT_EQ(myMap["H"],1);
    ASSERT_EQ(myMap["A"],3);
    ASSERT_EQ(myMap["S"],1);
    ASSERT_EQ(myMap["S"],1);
    ASSERT_EQ(myMap["I"],1);
    ASSERT_EQ(myMap["S"],1);


}