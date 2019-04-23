//
// Created by tothk on 2019. 04. 23..
//

#include "Mentor.h"
Mentor::Mentor(std::string name, int age, Gender gender, Level level) {
    _level = level;

}

void Mentor::getGoal() {
    std::cout << " My goal is: Educate brilliant junior software developers. " << std::endl;
}

std::string Mentor::getLevelAsString() {
    switch (_level) {
        case JUNIOR:
            return "junior";
        case INTERMEDIATE:
            return "intermediate";
        case SENIOR:
            return "senior";
    }
}

void Mentor::introduce() {
    std::cout << "Hi, I'm" << getName() << ", a " << getAge() << " year old " << getGenderAsString()
              << getLevelAsString() << "mentor." << std::endl;
}

Mentor::Mentor() : Person() {
    _level = INTERMEDIATE;
}


