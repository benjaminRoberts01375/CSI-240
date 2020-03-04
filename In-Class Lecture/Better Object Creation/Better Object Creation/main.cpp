/**
 * @file main.cpp
 * @brief  This is a lecture program that illustrates topic from gaddis chapter 11.
 *
 * @author Bilbo B. Baggins
 * @credits Gaddis Chapter 11
 * @assignment Lecture 5.1
 * @date 2/8/2020
 *
 */

#include <iostream>
#include "employee.h"

using namespace std;

int main() {
    Employee b;
    b.setFirstName("Bilbo");
    b.setLastName("Baggins");
    b.setSalary(55000.00);
    //this works
    cout << b.getFirstName() << " " << b.getLastName() << endl;
    
    Employee empDefault;
    cout << empDefault.getFirstName() << " " << empDefault.getLastName() << " " << empDefault.getSalary() << endl;
    
    const Employee gandalf("Gandalf", "The Grey");
    Employee* pEmp = new Employee("Samwise", "Gamjee");
    cout << "Count of Employees: " << Employee::getCounter() << endl;
    
    cout << pEmp->getLastName() << endl;
    cout << gandalf.getFirstName() << endl;
    delete pEmp;
    
    cout << "Number of employees: " << Employee::getCounter() << endl;
}
