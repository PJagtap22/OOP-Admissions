#ifndef ADMISSION_H
#define ADMISSION_H

#include <iostream>
#include <string>
#include <iomanip>

// defines the class admissions taking private data members name, age, gpa.
using namespace std;

class Admissions
{
private:
    string name;
    int age;
    float gpa;

public:
    Admissions(string n, int a) : name(n), age(a), gpa(0.0) {}

    bool isEligible();

    void CalcGPA(float grades[], int num_subjects);

    void displayInfo();
};

#endif;