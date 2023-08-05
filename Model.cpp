#include "One.h"


Model::Model()
{
	manufacturer = "Honda";
	model = "2021";
	startOfProduction = 1990;
}
void Model::disModel()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t       Details of the Model " << endl << endl;
	cout << "\t\t\t\tManufacturer of the motorcycle : " << manufacturer << endl;
	cout << "\t\t\t\tModel of the Motorcycle : " << model << endl;
	cout << "\t\t\t\tStart of the Production : " << startOfProduction << endl;
}