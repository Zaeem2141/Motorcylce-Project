#include "One.h"

	Owner ::Owner()
	{
		name = "John";
		surName = "Watson";
		yearOfBirht = 1998;
		DOB = 9;
		sex = "Male";
	}
	void Owner::printOwn()
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t            Details of the owner" << endl << endl;
		cout << "\t\t\t\tName of the owner of the MotorCycle : " << name << endl;
		cout << "\t\t\t\tSurName of the owner of the MotorCycle : " << surName << endl;
		cout << "\t\t\t\tYear of the birth of the owner of the MotorCycle : " << yearOfBirht << endl;
		cout << "\t\t\t\tDate of the birth of the owner of the MotorCycle : " << DOB << endl;
		cout << "\t\t\t\tSEX of the owner of the MotorCycle : " << sex << endl;
	}