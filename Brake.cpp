#include "One.h"

Brake::Brake()
{
	type = "Hydrolic Brakes";
	discDiamater = 20;
}
void Brake::apply()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\type of brake : " << type << endl;
	cout << endl << endl;
	cout << "\t\t\t\tBrake is Applied " << endl;
	Sleep(1000);
}