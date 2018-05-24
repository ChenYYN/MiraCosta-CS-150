// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 14 : Project 2
//===============================
/*Program Description:
                    Write a program that validates that a square is "magic"
                    using a two-dimensional 3x3 array. It should have a bool 
                    function named isMagicSquare which accepts the array as an
                    argument and returns true if it is a Lo Shu Magic Square
                    and false otherwise.
*/
//===============================
/*Algorithm:
            Read in 9 single digit numbers from the user, to fill the sqaure.
            check that all the numbers are single digits.
            check that all the numbers are unique and there are no duplicates.
            find the sum of all the rows.
            the sum of all the colums.
            and the sum of all the diagonals.
            check for sums of 15 in the rows and colums.
            construct the lo shu square in the console for the user to see
            output whether or not it is actually a lo shu magic square. 
*/
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
//Arrays.
int num[9];
int row[3];
int col[3];
int diag[2];
//check if all digits are between 1 and 9
bool isValid()
{
	for(int i = 0; i < 9; i++)
	{
		if((num[i] > 0) && (num[i] < 10))
		{
			return true;
		}
		else
		{
			return false;
			break;
		}
	}
}
//check all numbers are different.
bool notEqual()
{
	//check that numbers are not equal to each other
	if((num[0] != num[1]) && (num[1] != num[2]) &&
       (num[2] != num[3]) && (num[3] != num[4]) &&
       (num[4] != num[5]) && (num[5] != num[6]) &&
       (num[6] != num[7]) && (num[7] != num[8]) &&
       (num[0] != num[8]))
	{
		return true;
	}
	else
	{
		return false;
	}
}
//check if rows, colums, and diagonals equal a sum of 15.
bool checkLoShu()
{
	//return true if all rows, colums and diagonals are zero
	if((row[0] == 15) && (col[0] == 15)  && (diag[0] == 15)&& (row[1] == 15) &&
       (col[1] == 15) && (diag[1] == 15) && (row[2] == 15) && (col[2] == 15))
	{
		return true;
	}
	else
	{
		return false;
	}
}
//Reads in user input for the square, and checks for validity.
void createSquare()
{
	cout << "Please enter nine single digit numbers: " << endl;
	cin >> num[0] >> num[1] >> num[2];
	cin >> num[3] >> num[4] >> num[5];
	cin >> num[6] >> num[7] >> num[8];
	
	//sums of all rows.
	row[0] = num[0] + num[1] + num[2];
	row[1] = num[3] + num[4] + num[5];
	row[2] = num[6] + num[7] + num[8];
	
	//sums of all colums
	col[0] = num[0] + num[3] + num[6];
	col[1] = num[1] + num[4] + num[7];
	col[2] = num[2] + num[5] + num[8];
	
	//sums of all diagonals
	diag[0] = num[0] + num[4] + num[8];
	diag[1] = num[2] + num[4] + num[6];
}
//call main function
int main()
{
	createSquare();
	
	cout << "_____________" << endl;
	cout << "| " << num[0] << " | " << num[1] << " | " << num[2] << " |" << endl;
	cout << "| " << num[3] << " | " << num[4] << " | " << num[5] << " |" << endl;
	cout << "| " << num[6] << " | " << num[7] << " | " << num[8] << " |" << endl;
	cout << "_____________" << endl;
	
	//make sure all conditions are met
	if(isValid() && notEqual() && checkLoShu())
	{
		cout << "This is a Lo Shu Magic Square!\n" << endl;
	}
	else
	{
		cout << "This is not a Lo Shu Magic Square.\n"<< endl;
	}
	system("pause");
	return 0 ;
}
