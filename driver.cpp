#include "One.h"
void displayMenu()
{
	cout << endl << endl << endl << endl << endl <<endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t\tChoose any of the below  " << endl<<endl;
	cout << "\t\t\t\t\t\t 1. Owner of the MotorCycle " << endl;
	cout << "\t\t\t\t\t\t 2. Manufacturer and Model " << endl;
	cout << "\t\t\t\t\t\t 3. Personal information  " << endl;
	cout << "\t\t\t\t\t\t 4. Add Fuel " << endl;
	cout << "\t\t\t\t\t\t 5. Add Air in Tires  " << endl;
	cout << "\t\t\t\t\t\t 6. Start the MotorCycle  " << endl;
	cout << "\t\t\t\t\t\t 0. Exit " << endl;
}
int main()
{
	int flag = 0;

	char choice;
	do {
		system("CLS");
		flag = 0;
		displayMenu();
		cout << "\t\t\t\t\t\t\t"; cin >> choice;
		if (choice == '0')
			exit(0);
		else if (choice == '1') 
		{
			Owner on;
			on.printOwn();
			break;
		}
		else if (choice == '2')
		{
			Model md;
			md.disModel();
			break;

		}
		else if (choice == '3')
		{
			MotorCycle mtr;
			mtr.display();
			break;
		}
		else if (choice == '4')
		{
			Motor mt;
			mt.addFuel();
			flag = 1;
		}
		else if (choice == '5')
		{
			Motor mt;
			mt.addAir();
			flag = 1;
		}
		else if (choice == '6')
		{
			do {
				MotorCycle mtr;
				mtr.start();
				cout << "\t\t\t\t\t\t\t"; cin >> choice;
				if (choice == '1')
				{
					mtr.accelerate();
					flag = 1;
				}
				else if (choice == '2')
				{
					mtr.apply();
					flag = 1;
				}
				else if (choice == '3')
				{
					mtr.stop();
					flag = 1;
				}
				else if (choice == '4')
				{
					mtr.turning();
					flag = 1;
				}
				else if (choice == '5')
				{
					system("CLS");
					cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
					cout << "\t\t\t\t 1. Wanna GEar up ??" << endl;
					cout << "\t\t\t\t 2. Wanna GEar down ??" << endl;
					cout << "\t\t\t\t\t\t\t"; cin >> choice;
					if (choice == '1')
					{
						mtr.GearUp();
						flag = 1;
					}
					else if (choice == '2')
					{
						mtr.GearDown();
						flag = 1;
					}
				}


			} while (flag == 1);
		}
	} while (flag==1);
	return 0;
}