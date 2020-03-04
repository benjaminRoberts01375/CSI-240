#pragma once
#ifndef PERSON_H
#include <string>
#include <iostream>

class Person {
public:
	Person() {
		name = "Name is not set";
		birthYear = new int;
		*birthYear = 2025;
	}
	void printPersonInfo() const;
	Person(const Person& rhs);
    //Getters
	std::string getName() const { return name; }
	int getBirthYear() const { return *birthYear; }

    //Setters
	void setBirthYear(int birthYear) { // DO NOT CHANGE THE VARIABLE NAME
		*(this->birthYear) = birthYear;
	}
	void setName(std::string name) { // DO NOT CHANGE THE VARIABLE NAME
		this->name = name;
	}

	~Person();

private:
	std::string name;      // DO NOT CHANGE VARIABLE NAME
	int* birthYear; // DO NOT CHANGE VARIABLE NAME
};


#endif // !PERSON_H
