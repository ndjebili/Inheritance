//
// Created by nizam on 11/2/2021.
//

#include "GradStudent.h"
#include <iostream>
using std::cout;
using std::endl;

GradStudent::GradStudent():Student(), degreeEarned("Bachelor of Science") {}

GradStudent::GradStudent(string first, string last, int year, int day, int month, int sid, string degree): Student(first, last, year, day, month, sid), degreeEarned(degree){}

string GradStudent::getDegreeEarned()
{
    return degreeEarned;
}

void GradStudent::setDegreeEarned(string x)
{
    degreeEarned = x;
}