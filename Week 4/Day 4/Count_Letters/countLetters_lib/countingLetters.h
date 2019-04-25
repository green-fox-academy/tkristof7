//
// Created by tothk on 2019. 04. 25..
//

#ifndef COUNT_LETTERS_COUNTINGLETTERS_H
#define COUNT_LETTERS_COUNTINGLETTERS_H

#include <map>
#include <string>

class countingLetters {
public:
    std::string word;

    std::map<std::string, int> makingDictionary(std::string word);

};


#endif //COUNT_LETTERS_COUNTINGLETTERS_H
