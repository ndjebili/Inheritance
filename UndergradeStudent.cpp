//
// Created by nizam on 11/2/2021.
//

#include "UndergradeStudent.h"
#include <iostream>
using std::cout;
using std::endl;

UndergradeStudent::UndergradeStudent():Student(), classRank("Freshman") {}


UndergradeStudent::UndergradeStudent(string first, string last, int year, int day, int month, int sid, string srank): Student(first, last, year, day, month, sid), classRank(srank){}


void UndergradeStudent::setclassRank(string rank)
{
    classRank = rank;
}


string UndergradeStudent::getclassRank()
{
    return classRank;
}