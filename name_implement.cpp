#include "name.h"
#include <iostream>

name::name()
{
	first = " ";
	middle = " ";
	last = " ";
}

name::name(string firstName, string middleName, string lastName)
{
	first = firstName;
	last = lastName;
	middle = middleName;
}

string name::getFirstName() const
{
	return first;
}

string name::getLastName() const
{
	return last;
}

string name::getMiddleName() const
{
	return middle;
}

char name::getMiddleInitial() const
{
	return middle[0];
}

relationType name::comparedTo(name otherName) const
{
	if (last < otherName.last)
	{
		return BEFORE;
	}

	else if (otherName.last < last)
	{
		return AFTER;
	}

	else if (first < otherName.first)
	{
		return BEFORE;
	}

	else if (otherName.first < first)
	{
		return AFTER;
	}

	else if (middle < otherName.middle)
	{
		return BEFORE;
	}

	else if (otherName.middle < middle)
	{
		return AFTER;
	}

	else
	{
		return SAME;
	}
}