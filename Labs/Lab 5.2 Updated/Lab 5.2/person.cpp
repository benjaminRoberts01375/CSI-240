#include "person.h"

void Person::printPersonInfo() const
{
    std::cout << "Person       Name:\t" << name << std::endl;
    std::cout << "Person Birth Year:\t" << *birthYear << std::endl; // Error
}

Person::Person(const Person& rhs)
{
    //std::cout << "---Copy Constructor---" << std::endl;
    this->name = rhs.name;
    this->birthYear = new int (*(rhs.birthYear));
}

Person::~Person()
{
	delete birthYear;
}
