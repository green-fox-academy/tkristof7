//
// Created by tothk on 2019. 04. 23..
//

#ifndef GREEN_FOX_ORGANIZATION_STUDENT_H
#define GREEN_FOX_ORGANIZATION_STUDENT_H

#include "Person.h"


class Student : public Person {
public:
    Student();

    Student(std::string name, int age, Gender gender, std::string organization);

    void introduce() override;
    void getGoal ();
    void skipDays(int numberOfDays);
private:
    std::string _previousOrganization;
    int _skippedDays = 0;

};


#endif //GREEN_FOX_ORGANIZATION_STUDENT_H
