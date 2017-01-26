#pragma once
#include <iostream>
#include <string>
#include "relationType.h"

using namespace std;

class name
{
public:
	name();
	//default constructor
	//variables are set to blanks
	name(string firstName, string middleName, string lastName);

	string getFirstName() const;
	string getLastName() const;
	string getMiddleName() const;
	char getMiddleInitial() const;

	relationType comparedTo(name otherName) const;

private:
	string first;
	string last;
	string middle;
};