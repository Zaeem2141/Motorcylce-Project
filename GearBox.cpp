#include "One.h"

GearBox::GearBox()
{
	noOfGears = 6;
	CurrentGear = 0;
}
void GearBox:: GearUp()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\tPrevious Gear " << CurrentGear << endl;
	CurrentGear++;
	cout << "\t\t\t\tCurrent gear : " << CurrentGear << endl;
	Sleep(2000);
}
void GearBox::GearDown()
{
	if (CurrentGear == 0)
	{
		cout << "Its Already Neutral" << endl;
		Sleep(2000);
	}
	else
	{
		cout << "Previous Gear " << CurrentGear << endl;
		CurrentGear--;
		cout << "Current gear : " << CurrentGear << endl;
		Sleep(2000);
	}
}