#include <iostream>
#include <string>
#include <iomanip>
#include "Admissions.h"

using namespace std;

Admissions::Admissions(string n, int a) : name(n), age(a), gpa(0.0) {}

bool Admissions::isEligible()
{
    return (gpa >= 3.5);
}

void Admissions::CalcGPA(float grades[], int num_subjects)
{
    float total = 0.0;
    for (int i = 0; i < num_subjects; ++i)
    {
        total += grades[i];
    }
    gpa = (total / num_subjects) / 10;
}

void Admissions::displayInfo()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << fixed << setprecision(2) << "GPA: " << gpa << endl;
}