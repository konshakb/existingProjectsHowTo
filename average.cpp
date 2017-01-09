/********************************************************************

** Author:  Bryan Konshak

** Date:  4/1/2016

** Description:  A program that averages five entered numbers

*********************************************************************/


#include <iostream>
#include <string>
using namespace std; //allows cin and cout

int main()
{
	double num1, num2, num3, num4, num5, average; //5 numbers to average
    string str;
    string output = "";
    int counter = 1;
        while (str.at(counter) != 'o')
        {
            output += str.at(counter);
            counter += 3;
        }
    cout << output << endl;

    


 




	cout << "Please enter five numbers.\n"; //ask user for numbers to average
	cin >> num1 >> num2 >> num3 >> num4 >> num5; //user enters numbers to average

	average = (num1 + num2 + num3 + num4 + num5) / 5.; //average formula

	cout << "The average of those numbers is: \n"; //output with average
	cout << average  << endl; //using variable "average"
    return 0;

}

