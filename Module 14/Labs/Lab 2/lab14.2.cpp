// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 14 : Lab 2
//===============================
/*Program Description:
                    Write a program that lets a distributor of chips and salsa
                    keep track of sales for the five different types of salsa
                    they produce: mild, med, hot, and zesty. It should use two
                    parallel five-element arrays.
*/
//===============================
/*Algorithm:
            create two arrays of size 5 to hold the salsa type as a string, and
            the amount for each type. 
            iterate through both arrays at the same time and record user input
            for each index of the arrays.
            finally iterate through the arrays again and output their contents
            in a nicely formatted table. 
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

//Helper Methods (To get input from the user).
//Reads in a String from the keyboard and returns it. 
string type()
{
	string salsa;
	
	cout << "\nEnter a type of salsa: ";
	cin >> salsa;
	return salsa;
}
//Reads integer amounts greater that 0 and returns the value if valid. 
int amount()
{
	int sales;
	
	cout << "\nHow many units were sold in the last month?: ";
	cin >> sales;
	//checking for valid input. 
	while(true)
	{
		if(sales >= 0)
		{
			return sales;
			break;
		}
		else
		{
			cout << "\nError: Value must be positive...";
            cout << "\nHow many units were sold in the last month?: ";
	        cin >> sales;
	        continue;
		}
	}
}

int main()
{
	//Arrays
	string salsa[5];
	int jars[5];
	
	for(int i = 0; i < 5; i++)
	{
		salsa[i] = type();
		jars[i] = amount();
	}
	
    //Table Header: 
	cout << "\n\n-Total Salsa Sales-" << endl;
	cout << setw(10) << left << "Item:" << setw(10) << right << "Jars Sold:"<< endl;
	
	//Table Contents:
	for(int i = 0; i < 5; i++)
	{
		cout << setw(10) << left << salsa[i] << setw(10) << right << jars[i] << endl;
	}
	system("pause");
	return 0;
}
