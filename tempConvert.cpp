/************************************************************************************

** Author:  Bryan Konshak

** Date:  4/1/2016

**  Description:  Program converts Celsius to Fahrenheit

***************************************************************************************/


#include <iostream>

using namespace std;

int main()
{
	//double variables to include decimals
	double fahrenheit, celsius;

	//Program will ask for celsius temp
	cout << "Please enter a Celsius temperature." << endl;

	//User inputs Celsius
	cin >> celsius;

	//formula for fahrenheit with FLOATING POINT NUMBER 
	fahrenheit = celsius * (9./5)  + 32;

	//program runs and output will produce fahrenheit
	cout << "The equivalent Fahrenheit temperature is:\n";
	cout << fahrenheit << endl;





	return 0;


}
