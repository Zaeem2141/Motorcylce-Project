#include "One.h"


Tires::Tires()
{
	composition = "Pure Ruber";
	manufacturer = "Service";
	diameter = 5;
}
void Tires::addA()
{
	for (int i = 0; i < 5; i++)
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\tManufacturer of tyre : " << manufacturer << endl;
		cout << "\t\t\t\t\tDiamter of the tyre : " << diameter << endl;
		cout << "\t\t\t\t\tWait for the five seconds tyre is refilling" << endl;
		cout << "\t\t\t\t\tSeconds : " << i + 1;
		Sleep(1000);
	}
}