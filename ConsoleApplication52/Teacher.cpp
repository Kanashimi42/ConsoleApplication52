#include <iostream>
#include "Teacher.h"

using namespace std;

Teacher::Teacher(const char* n, int a, const char* s, int sl, int noi, char** it) : Person(n, a) {
    school = new char[strlen(s) + 1];
    strcpy_s(school, strlen(s) + 1, s);

    salary = sl;
    numberOfItems = noi;
    items = new char* [numberOfItems];

    for (int i = 0; i < noi; i++) {
        items[i] = new char[strlen(it[i]) + 1];
        strcpy_s(items[i], strlen(it[i]) + 1, it[i]);
    }
}

Teacher::~Teacher() {
    delete[] items;
    delete[] school;
}

void Teacher::Input() {
    Person::Input();

    char temp[200];

    cout << "Enter the school name: ";
    cin >> temp;

    school = new char[strlen(temp) + 1];
    strcpy_s(school, strlen(temp) + 1, temp);

    cout << "Enter the salary: ";
    cin >> salary;

    for (int i = 0; i < numberOfItems; i++)
        if (items[i] != nullptr)
            delete[] items[i];

    cout << "Enter the number of subjects you know: ";
    cin >> numberOfItems;

    items = new char* [numberOfItems];

    for (int i = 0; i < numberOfItems; i++) {
        cout << "Enter the subject: ";
        cin >> temp;

        items[i] = new char[strlen(temp) + 1];
        strcpy_s(items[i], strlen(temp) + 1, temp);
    }
}

void Teacher::Print() {
    Person::Print();
    cout << "School: " << school << ", salary: " << salary << ", subjects:" << endl;
    for (int i = 0; i < numberOfItems; i++) {
        cout << items[i] << endl;
    }
    cout << endl;
}
