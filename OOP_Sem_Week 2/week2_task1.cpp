#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:

	char firstName[30];
	char lastName[30];
	int EGN[10];


public:
	Person();
	Person(char* newFirstName, char* newLastName, int* newEGN);
	void printPerson();

	char* getFirstName();
	void setFirstName(char* newFirstName);

	char* getLastName();
	void setLastName(char* newLastName);

	int* getEGN();
	void setEGN(int* newEGN);
};
Person::Person()
{
	firstName[0] = '\0';
	lastName[0] = '\0';
	for (size_t i = 0; i < 10; ++i)
	{
		EGN[i] = 0;
	}
}
Person::Person(char* newFirstName, char* newLastName, int* newEGN)
{
	strcpy_s(firstName, 100,newFirstName);
	strcpy_s(lastName, newLastName);
	for (size_t i = 0; i < 10; ++i)
	{
		EGN[i] = newEGN[i];
	}
}
void Person::printPerson()
{
	cout << "Person: " << endl;
	cout << "First Name : "  << firstName << endl;
	cout << "Last Name : " << lastName << endl;
	for (size_t i = 0; i < 10; ++i)
	{
		cout << EGN[i];
	}
	cout << endl;
}

char* Person::getFirstName()
{
	return firstName;
}
void Person::setFirstName(char* newFirstName)
{
	int size = strlen(newFirstName);
	if (size > 30) return;
	strcpy_s(firstName, newFirstName);
}
char* Person::getLastName()
{
	return lastName;
}
void Person::setLastName(char* newLastName)
{
	int size = strlen(newLastName);
	if (size > 30) return;
	strcpy_s(firstName, newLastName);
}
int* Person::getEGN()
{
	return EGN;
}
void Person::setEGN(int* newEGN)
{
	for (size_t i = 0; i < 10; i++)
	{
		EGN[i] = newEGN[i];

   }
}
class BankAccount {
private:
	Person owner;
	char IBAN[10];
	double balance;
	char currency[3];
public:
	BankAccount();
	BankAccount(Person p, char* newIBAN, double newBalance, char* newCurrency);

	Person getOwner();
	void setOwner(Person p);

	char* getIBAN();
	void setIBAN(char* newIBAN);

	double getBalance();
	void setBalance(double);

	char* getCurrency();
	void setCurrency(char* newCurrency);

	void printBankAccount();
};

Person BankAccount::getOwner()
{
	return owner;
}
void BankAccount::setOwner(Person p)
{
	owner.setFirstName(p.getFirstName());
	owner.setLastName(p.getLastName());
	owner.setEGN(p.getEGN());
}


int main()
{
	int egn[10] = { 9,7,0,5,2,7,3,0,2,0 };
	Person tmp;
	tmp.setFirstName("Pe6o");
	Person tmp2("Idiot", "tup", egn);
	tmp.printPerson();
	tmp2.printPerson();
	for (size_t i = 0; i < 10; i++)
	{
		cout << *(tmp2.getEGN()+i);
	}
    return 0;
}

