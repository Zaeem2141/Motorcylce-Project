#include "One.h"

Motor :: Motor()
{
	displacement = 100;
	power = 120;
	noOfCylinder = 1;
}
void Motor:: addFuel()
{
	cout << "Number of cylinders are : " << noOfCylinder << endl;
	addF();
}
void Motor ::addAir()
{
	addA();
}