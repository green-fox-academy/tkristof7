//
// Created by tothk on 2019. 04. 23..
//

#ifndef GREEN_FOX_ORGANIZATION_SPONSOR_H
#define GREEN_FOX_ORGANIZATION_SPONSOR_H

#include "Person.h"
class Sponsor: public Person{
public:
    Sponsor();
    void introduce();
    void hire();
    void getGoal();

    Sponsor(std::string name, int age, Gender gender, std::string company);

private:
    std::string _company = "Google";
    int _hiredStudents = 0;

};


#endif //GREEN_FOX_ORGANIZATION_SPONSOR_H
