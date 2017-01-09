/************************************************************************************

** Author:  Bryan Konshak

**  Date:  4/1/2016

**  Description:  A program that computes change in cents using least amount of coins

******************************************************************************************/



#include <iostream>
using namespace std;

int main()
{
	int change, quarter, dime, nickel, penny, remainderQuarter; //integers declared for all coin types and change

	//User is asked to enter cent amount less than a dollar
	cout << "Please enter an amount in cents less than a dollar.\n";

	cin >> change; //user inputs change


	quarter = change / 25;  //Quarter formula first divide by .25 (quarter value)

	remainderQuarter = change % 25; //remainder of coin when divided by .25 (quarter value)

	dime = (remainderQuarter) / 10; //Dime formula using remainder from quarters / 10 (dime value)


	nickel = ((remainderQuarter)%10) / 5; //Nickel formula using remainder from dimes / 5 (nickel value)

	penny = ((remainderQuarter) % 10) % 5; //Penny formula using remainder from nickels will equal pennies

	//Compute least coins given as change
	cout << "Your change will be:" << endl; 
	cout << "Q:  " << quarter << endl;
	cout << "D:  " << dime << endl;
	cout << "N:  " << nickel << endl;
	cout << "P:  " << penny << endl;

 	return 0;


}
