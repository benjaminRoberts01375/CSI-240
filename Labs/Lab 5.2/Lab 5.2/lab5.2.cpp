// lab5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "person.h"
#include "utility.h"
using namespace std;

// DO NOT CHANGE MAIN FUNCTION AT ALL
int main()
{
    Person firstPerson;
    outputTest(firstPerson);

    firstPerson.setName("Sena");
    if (firstPerson.getName() != "Sena")
        cout << "Defect: Name cannot set to Sena \n\n\n";

    Person secondPerson = firstPerson;

    firstPerson.setBirthYear(2030);

    if (secondPerson.getBirthYear() != 2025) {
        cout << "Defect: BirthYear of secondPerson also changed \n";
        cout << "\t 1st Person Birth Year:\t" << firstPerson.getBirthYear() << endl;
        cout << "\t 2nd Person Birth Year:\t" << secondPerson.getBirthYear() << endl;
    }

    outputTest(firstPerson);
    outputTest(secondPerson);

    return 0;
}
