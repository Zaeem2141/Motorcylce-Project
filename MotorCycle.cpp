#include "One.h"

	MotorCycle::MotorCycle()
	{
		manufactureYear = 2021;
		VIN = 2021;
		color = "Red";
		price = 500;
	}
	void MotorCycle::display()
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t  Personal information of MotorCycle " << endl << endl;
		cout << "\t\t\t\tManufature YEar of Motor Cycle : " << manufactureYear << endl;
		cout << "\t\t\t\tVIN  of Motor Cycle : " << VIN << endl;
		cout << "\t\t\t\tColor of Motor Cycle : " << color << endl;
		cout << "\t\t\t\tPrice of Motor Cycle : " << manufactureYear << "$" << endl;
	}

	void MotorCycle::start()
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\tChoose any of the below  " << endl << endl;
		cout << "\t\t\t\t\t\t 1. Accelerate  " << endl;
		cout << "\t\t\t\t\t\t 2. Brake " << endl;
		cout << "\t\t\t\t\t\t 3. stop  " << endl;
		cout << "\t\t\t\t\t\t 4. turn " << endl;
		cout << "\t\t\t\t\t\t 5. change the gear" << endl;
		cout << "\t\t\t\t\t\t 0. Exit " << endl;
	}
