#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main() {
    int selection = 0;
    vector<Student> studentList;

    Student a("Aaa", 30);
    Student b("Bee", 26);
    Student c("Cee", 28);
    Student d("Dee", 27);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    do {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch (selection) {
        case 0: {
            string name;
            int age;
            cout
                << "Enter student name: ";
            cin >> name;
            cout
                << "Enter student age: ";
            cin >> age;
            studentList.push_back(Student(name, age));
            cout
                << "Student added"
                << endl;
            break;
        }

        case 1:
            cout
                << "Opiskelijoiden nimet:"
                << endl;
            for (const Student &s : studentList) {
                cout
                    << s.getName()
                    << endl;
            }
            break;

        case 2:
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b) {
                return a.getName() < b.getName();
            });

            cout
                << endl
                << "Lajiteltu nimen perusteella:"
                << endl;
            for (const Student &s : studentList) {
                s.printStudentInfo();
            }
            break;

        case 3:
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b) {
                return a.getAge() < b.getAge();
            });

            cout
                << endl
                << "Lajiteltu iän perusteella:"
                << endl;
            for (const Student &s : studentList) {
                s.printStudentInfo();
            }
            break;

        case 4: {
            string searchName;
            cout
                << "Enter student name: ";
            cin>> searchName;


            auto it = find_if(studentList.begin(), studentList.end(), [&searchName](const Student &s) {
                return s.getName() == searchName;
            });

            if (it != studentList.end()) {
                cout
                    << "Opiskelija löytyi:"
                    << endl;
                it->printStudentInfo();
            } else {
                cout
                    << "Opiskelijaa ei löytynyt."
                    << endl;
            }
            break;
        }

        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    } while (selection < 5);

    return 0;
}

