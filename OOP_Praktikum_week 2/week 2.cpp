#include "stdafx.h"
#include<iostream>
#include<cstring>

using namespace std;
class Car {
private:
	char Brand[64];
	char Model[64];
	int Year;
	double Litres;
	double Power;
	int Km;
	char Fuel[10];
public:
	Car();
	Car(char* newBrad, char* newModel, int newYear, double newLitres, double newPower, int newKm, char* newFuel);
	void printCarInfo();

	char* getBrand();
	void setBrand(char* newBrad);

	char* getModel();
	void setModel(char* newModel);

	int getYear();
	void setYear(int newYear);

	double getLitres();
	void setLitres(double newLitres);

	double getPower();
	void setPower(double newPower);

	int getKm();
	void setKm(int newKm);

	char* getFuel();
	void setFuel(char* newFuel);

	bool isNew();
	int addKM(int plusKm);
	void information();
};

Car::Car()
{
	Brand[0] = '\0';
	Model[0] = '\0';
	Year = 0;
	Litres = 0;
	Power = 0;
	Km = 0;
	Fuel[0] = '\0';
}
Car::Car(char* newBrand, char* newModel, int newYear, double newLitres, double newPower, int newKm, char* newFuel)
{
	strcpy_s(Brand, newBrand);
	strcpy_s(Model, newModel);
	Year = newYear;
	Litres = newLitres;
	Power = newPower;
	Km = newKm;
	strcpy_s(Fuel, newFuel);

}

char* Car::getBrand()
{
	return Brand;
}
void Car::setBrand(char* newBrand)
{
	if (strlen(newBrand) > 64)return;
	strcpy_s(Brand, newBrand);
}

char* Car::getModel()
{
	return Model;
}

void Car::setModel(char* newModel)
{
	if (strlen(newModel) > 64) return;
	strcpy_s(Model, newModel);
}
int Car::getYear()
{
	return Year;
}
void Car::setYear(int newYear)
{
	Year = newYear;
}
double Car::getLitres()
{
	return Litres;
}
void Car::setLitres(double newLitres)
{
	Litres = newLitres;
}
double Car::getPower()
{
	return Power;
}
void Car::setPower(double newPower)
{
	Power = newPower;
}
int Car::getKm()
{
	return Km;
}
void Car::setKm(int newKm)
{
	Km = newKm;
}
char* Car::getFuel()
{
	return Fuel;
}
void Car::setFuel(char* newFuel)
{
	if (strlen(newFuel) > 10) return;
	strcpy_s(Fuel, newFuel);
}
void Car::printCarInfo()
{
	cout << "Brand : " << Brand << endl;
	cout << "Model : " << Model << endl;
	cout << "Year : " << Year << endl;
	cout << "Engine : " << Litres << endl;
	cout << "Horse power: " << Power << endl;
	cout << "KM driven : " << Km << endl;
	cout << "Fuel type : " << Fuel<< endl;
}

int main()
{
	Car MyCar("Nissan", "GTR", 2017, 3.8, 600, 10000, "Diesel");
	 
    return 0;
}

