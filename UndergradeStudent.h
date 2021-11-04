//
// Created by nizam on 11/2/2021.
//

#ifndef DJEBILI_HW3_Q1_UNDERGRADESTUDENT_H
#define DJEBILI_HW3_Q1_UNDERGRADESTUDENT_H
#include "Student.h"

class UndergradeStudent:public Student {
public:
    UndergradeStudent();
    UndergradeStudent(string first, string last, int year, int day, int month, int sid, string srank);
    void setclassRank(string rank);
    string getclassRank ();

protected:
    string classRank;
};


#endif //DJEBILI_HW3_Q1_UNDERGRADESTUDENT_H
