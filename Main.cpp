#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

int main()
{
	bool notDone = true;

	while (notDone)
	{
		int option = menu();
		if (option == 1)
		{
			double fahrenheit;
			cout << "Enter Temperature in Fahrenheit:  ";
			cin >> fahrenheit;
			//double celsius = fToC(fahrenheit);
			cout << "Temperature in Celsius: " << fToC(fahrenheit) << endl;
		}
		else if (option == 2)
		{
			//add ctof function
			double celsius;
			cout << "Enter Temperature in Celsius:  ";
			cin >> celsius;
			cout << "Temperature in Fahrenheit is: " << cToF(celsius) << endl;
		}
		else
		{
			notDone = false;
		}


	}
	return 0;
}