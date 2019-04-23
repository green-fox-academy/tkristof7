//
// Created by tothk on 2019. 04. 23..
//

#include "Student.h"

Student::Student(std::string name, int age, Gender gender, std::string organization) : Person(name, age, gender) {
    _previousOrganization = organization;

}
Student::Student() : Person(){
    _previousOrganization = " The School of Life ";
    _skippedDays = 0;
}


void Student::introduce() {
    std::cout << " Hi my name is " << getName() << " , I'm a " << getAge() << " old " << getGenderAsString() << ", I learn at " << _previousOrganization << std::endl;

}
void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer. " << std::endl;
}

void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}

