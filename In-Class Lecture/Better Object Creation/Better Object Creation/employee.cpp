
/**
 * @file employee.cpp
 * @brief  This is a sample program that implements two constructors
 * and a destructor
 *
 * @author Bilbo B. Baggins
 * @credits Gaddis Chapter 11
 * @assignment Lecture 5.1
 * @date 2/8/2020
 *
 */
#include <iostream>
#include "employee.h"

int Employee::counter = 0;

Employee::Employee() : Employee("None", "None")
{
    std::cout << "In default constructor" << std:: endl;
    counter++;
}

Employee::Employee(std::string firstName, std::string lastName):firstName{firstName}, lastName{lastName}
{
    //removed two lines here.
    std::cout << "In 2 Parameter constructor" << std:: endl;
    salary = 0.0;
    counter++;
    }

Employee::~Employee()
{
    --counter;
    std::cout << "Destroying:" << this->firstName << std:: endl;
}
