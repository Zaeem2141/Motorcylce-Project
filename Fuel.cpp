#include "One.h"

Fuel::Fuel()
{
	capacity = 10;
}
void Fuel :: addF()
{

	for (int i = 0; i < capacity; i++)
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<<endl;
		cout << "\t\t\t\t\tCpacity of the tank :  " << capacity << " Liters" << endl;
		cout << "\t\t\t\t\tWait its filling " << endl;
		cout << "\t\t\t\t\tseconds : " << i + 1;
		Sleep(1000);
	}
}