/**
 * @file employee.h
 * @brief  This is a sample program that declares a very limited Employee class
 *
 * @author Bilbo B. Baggins
 * @credits Gaddis Chapter 11
 * @assignment Lecture 5.1
 * @date 2/8/2020
 *
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
class Employee
{
private:
    std::string firstName;
    std::string lastName;
    float salary;
    static int counter;
public:
    //getters
    std::string getFirstName() const {return firstName;}
    std::string getLastName() const {return lastName;}
    float getSalary() const { return salary; }
    //static getters
    static int getCounter() { return counter; }
    
    //setters
    void setFirstName(std::string firstName){this->firstName = firstName;}
    void setLastName (std::string lastName){this->lastName = lastName;}
    void setSalary(float salary){this->salary = salary; }
    
    //constructors
    Employee();
    Employee(std::string firstName, std::string lastName);
    
    
    //destructors
    ~Employee();
};
#endif
