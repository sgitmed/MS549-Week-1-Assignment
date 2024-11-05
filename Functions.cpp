#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

int menu()
{
	int choice;
	cout << "1. Convert from fahrenheit to celsius" << endl;
	cout << "2. Convert from celsius to fahrenheit" << endl;
	cout << "3. Exit Program" << endl;
	cout << "Please enter your choice:  ";
	cin >> choice;
	return choice;
}

double fToC(double fahrenheit)
{
	double celsius;
	celsius =  (fahrenheit - 32) * 5.0 / 9.0;
	return celsius;
}

double cToF(double celsius)
{
	double fahrenheit;
	fahrenheit = (celsius * 9.0 / 5.0) + 32;
	return fahrenheit;
}