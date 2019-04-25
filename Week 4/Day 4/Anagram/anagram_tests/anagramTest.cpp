#include "gtest/gtest.h"
#include "anagram.h"

TEST(TestAnagram, IsItAnagram)
{
    Anagram anagram;
    std::string word1= "Steel";
    std::string word2= "Alloy";

    bool result = anagram.checkIfAnagram(word1, word2);

    ASSERT_EQ(result, false);
}