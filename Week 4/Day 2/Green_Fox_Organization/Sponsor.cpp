//
// Created by tothk on 2019. 04. 23..
//

#include "Sponsor.h"

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) : Person(name, age, gender) {
    _company = company;

}

void Sponsor::introduce() {
    std::cout << " Hi, I'm " << getName() << " , a " << getAge() << " year old " << getGenderAsString()
              << " who represents" << _company << " and hired " << _hiredStudents << "students so far." << std::endl;
}
void Sponsor::hire(){
    _hiredStudents ++;
}
void Sponsor::getGoal() {
    std::cout << "My goal is: Hire briliant junior software developers." << std::endl;
}
Sponsor::Sponsor() {
    _hiredStudents = 0;

}