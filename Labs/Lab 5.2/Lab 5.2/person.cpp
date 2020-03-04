#include "person.h"

Person::~Person()
{
    std::cout << *birthYear << std::endl;
	//delete birthYear;
    //delete name;
    std::cout << "Kaboom!" << std::endl;
}
