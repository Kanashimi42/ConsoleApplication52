#include "Doctor.h"
#include "Person.h"

using namespace std;

Doctor::Doctor(const char* n, int a, string* sp, int nos, int exp, bool fd) : Person(n, a) {
    numberOfSpecialties = nos;
    speciality = new string[numberOfSpecialties];
    speciality = sp;
    experience = exp;
    familyDoctor = fd;
}
Doctor::~Doctor() {
    delete[] speciality;
}

void Doctor::Input() {
    if (speciality != nullptr)
        delete[] speciality;

    Person::Input();

    char log;

    cout << "Enter the number of specialties: ";
    cin >> numberOfSpecialties;

    for (int i = 0; i < numberOfSpecialties; i++) {
        cout << i + 1 << ". Enter specialty: " << endl;
        cin >> speciality[i];
    }

    cout << "Enter years of experience: ";
    cin >> experience;

    do {
        cout << "Are you a family doctor? (y - yes, n - no)\n> ";
        cin >> log;

        if (log == 'y')
            familyDoctor = true;
        else if (log == 'n')
            familyDoctor = false;
        else
            cout << "You entered an incorrect character!" << endl << endl;
    } while (log != 'y' && log != 'n');
}

void Doctor::Print() {
    Person::Print();

    cout << "Specialties: " << endl;
    for (int i = 0; i < numberOfSpecialties; i++)
        cout << speciality[i] << endl;
    cout << endl;

    cout << "Years of experience: " << experience << endl;
    printf("Family doctor: %s\n", familyDoctor == true ? "yes" : "no");
}
