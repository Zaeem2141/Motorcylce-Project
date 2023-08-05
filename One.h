#pragma once
#include <iostream>
#include<Windows.h>
using namespace std;
class Owner
{
private:
	string name;
	string surName;
	int yearOfBirht;
	int DOB;
	string sex;
public:
	Owner();
	void printOwn();
};
class Model
{
private:
	string manufacturer;
	string model;
	int  startOfProduction;
public:
	Model();
	void disModel();

};
class Accelerate
{
private:
	int speed;
public:
	Accelerate();
	void accelerate();
};
class Stop
{
private:
	int speed;
public:
	Stop();
	void stop();
};
class Wheel
{
private:
	string material;
	int diameter;
	string type;
public:
	void turning();
};
class GearBox
{
private:
	int noOfGears;
	int CurrentGear;
public:
	GearBox();
	void GearUp();
	void GearDown();
};
class Brake
{
private:
	string type;
	int discDiamater;
public:
	Brake();
	void apply();
};
class Fuel
{
private:
	int capacity;
public:
	Fuel();
	void addF();
};
class Tires
{
private:
	string composition;
	string manufacturer;
	int diameter;
public:
	Tires();
	void addA();
};
class Motor :public Fuel, public Tires
{
private:
	float displacement;
	float power;
	int noOfCylinder;
public:
	Motor();
	void addFuel();
	void addAir();

};
class MotorCycle:public Brake, public GearBox, public Wheel, public Stop, public Accelerate
{
private:
	int manufactureYear;
	int VIN;
	string color;
	int price;
public:
	void start();
	MotorCycle();
	void display();
};
