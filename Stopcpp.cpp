#include "One.h"

Stop :: Stop()
{
	speed = 70;
}
void Stop :: stop()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\tCurrent speed : " << speed << endl;
	cout << "\t\t\t\tmotorCycle is stopped  " << endl;
	cout << "\t\t\t\tCurrent speed :  0" << endl;
	Sleep(3000);
}