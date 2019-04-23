//
// Created by tothk on 2019. 04. 23..
//

#ifndef GREEN_FOX_ORGANIZATION_COHORT_H
#define GREEN_FOX_ORGANIZATION_COHORT_H


#include <iostream>
#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort {
private:
    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;

public:
    void addStudent(Student* myStudent);
    void addMentor(Mentor* myMentor);
    void info();
    Cohort(std::string name);
};


#endif //GREEN_FOX_ORGANIZATION_COHORT_H
