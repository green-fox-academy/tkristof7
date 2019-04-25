//
// Created by tothk on 2019. 04. 25..
//
#include <map>
#include "countingLetters.h"

std::map<std::string, int> countingLetters::makingDictionary(std::string word)
{
    std::map<std::string, int> myMap;
    for (unsigned int i = 0; i < word.size(); ++i) {
        myMap[word.substr(i, 1)]++;

    }
    return myMap;
}