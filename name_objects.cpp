#include <iostream>
#include <string>
#include "name.h"

using namespace std;

int main()
{
	name herName("Susy", "Sunshine", "Smith");
	name hisName("Marvin", "Moonlight", "Morgan");
	cout << "Her name is " << herName.getFirstName() << " "
		 << herName.getMiddleName() << " " << herName.getLastName() << endl;
	cout << "Her middle initial is " << herName.getMiddleInitial() << endl;
	cout << "His name is " << hisName.getFirstName() << " " << hisName.getMiddleName()
		<< " " << hisName.getLastName() << endl;

	switch (hisName.comparedTo(herName))
	{
	case BEFORE:
		cout << "His name comes before her name." << endl;
		break;

	case AFTER:
		cout << "His name comes after her name." << endl;
		break;

	case SAME:
		cout << "His name and her's are the same." << endl;
		break;
	}
	return 0;
}