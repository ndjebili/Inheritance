//
// Created by nizam on 11/2/2021.
//

#ifndef DJEBILI_HW3_Q1_GRADSTUDENT_H
#define DJEBILI_HW3_Q1_GRADSTUDENT_H
#include "Student.h"

class GradStudent:public Student{
public:
    GradStudent();
    GradStudent(string first, string last, int year, int day, int month, int sid, string degree);
    string getDegreeEarned();
    void setDegreeEarned(string x);

protected:
    string degreeEarned;
};


#endif //DJEBILI_HW3_Q1_GRADSTUDENT_H
