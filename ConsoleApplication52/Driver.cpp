#include "Driver.h"

using namespace std;

Driver::Driver(const char* n, int a, string notc, int ps, int pID) : Person(n, a) {
    numberOfTheCar = notc;
    passportSeries = ps;
    passportID = pID;
}

void Driver::Input(string notc, int ps, int pID) {
    Person::Input();

    numberOfTheCar = notc;
    passportSeries = ps;
    passportID = pID;
}

void Driver::Print() {
    Person::Print();

    cout << "Car Number: " << numberOfTheCar << endl;
    cout << "Driver's License Series: " << passportSeries << endl;
    cout << "Driver's License ID: " << passportID << endl;
}
