#include <iostream>
#include <string>
#include <iomanip>
#include "Admissions.h"

using namespace std;

int main() {
        string name;
        int age, num_subjects;
        float gpa;

        cout << "Welcome to Krea University Adimission process" << endl;

        cout << "Enter Full name: ";
        getline(cin, name);

        if (name.length() > 25) {
            cout << "Invalid! Enter characters between 1 to 25." << endl;
            name = name.substr(0,25);
        }

        cout << "Enter student age: ";
        cin >> age;
        while (age < 17) {
            cout << "Invalid! Applicants must be above 17 years. Enter the age: ";
            cin >> age;
        } 

        cout << "Enter the number of subjects: ";
        cin >> num_subjects;

        float *grades = new float[num_subjects];
        for (int i = 0; i < num_subjects; ++i) 
        {
            cout << "Enter grade for subject " << i+1 << ": ";
            cin >> grades[i];
        }

            Admissions student(name, age);
            student.CalcGPA(grades, num_subjects);

            student.displayInfo();    

        if (student.isEligible()) {
            cout << "Congratulations! Krea welcomes you to its next round, we will shortly announce your interview dates, stay tuned!" << endl;
        } else {
            cout << "Sorry, you don't meet the eligibility criteria." << endl;
        }

        delete[] grades;
        return 0;
    }

