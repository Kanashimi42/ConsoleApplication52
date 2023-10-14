#include <iostream>
#include <Windows.h>

#include "Student.h"
#include "Teacher.h"
#include "Driver.h"
#include "Doctor.h"

using namespace std;

int main() {

	Student obj("Viacheslav", 20, "ITStep University");
	obj.Print();

	int tempNumber;
	char** items;
	char temp[50];

	cout << "Enter the number of subjects: ";
	cin >> tempNumber;

	items = new char* [tempNumber];

	for (int i = 0; i < tempNumber; i++) {
		cout << "Enter a subject: ";
		cin >> temp;

		items[i] = new char[strlen(temp) + 1];
		strcpy_s(items[i], strlen(temp) + 1, temp);
	}
	cout << endl;

	Teacher obj1("Oksana", 30, "School #2", 15000, tempNumber, items);
	obj1.Print();

	Driver driver("Viacheslav", 20, "AA123G", 3252643, 77235643);
	driver.Print();
	cout << endl;
	driver.Input("AA123G", 3252643, 77235643);
	cout << endl;
	driver.Print();

	int specialtiesNumber = 2;
	string tempStr;
	string* specialties = new string[specialtiesNumber];
	for (int i = 0; i < specialtiesNumber; i++) {
		cout << "Enter a specialty: ";
		cin >> tempStr;
		specialties[i] = tempStr;
	}

	Doctor doctor("Viacheslav", 20, specialties, specialtiesNumber, 2, true);
	doctor.Print();

	return 0;
}
