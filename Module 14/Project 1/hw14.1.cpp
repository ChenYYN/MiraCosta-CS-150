// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 14 : Project 1
//===============================
/*Program Description:
                    Write a program that simulates a lottery, the program should
                    have an array of five integers named winningDigits with a 
                    randomly generated number in range of 1 through 6 for each
                    element in the array. The program should ask the user to
                    enter five digits in the range of 1 to 6 and store them in a
                    second integer array named player. The program should then
                    compare the corresponding elements in the two arrays and 
                    count how many digits match.
*/
//===============================
/*Algorithm:
            Generate a random lottery number to be the winning numbers.
            Read in user input and save the input as the user selected numbers.
            Iterate both arrays and check to see how many matching numbers there
            are.
            Print the winning numbers and the user entered numbers.
            Check to see if there was a winning number entered by the user.
*/
#include <iostream>	
#include <cstdlib>	
#include <ctime>

using namespace std;

//Constants.
const int LOTTERY_DIGITS = 6;
const int SIZE = 5;

//Prototypes:
void genLotto(int lottery[]);
void userLotto(int user[]);
int matches(int lottery[], int user[]);
void print(int lottery[], int user[]);
void isWinner(int ticket);

int main()
{
	//Vars:
	int winningDigits[SIZE] = {0, 0, 0, 0, 0};
	int player[SIZE] = {0, 0, 0, 0, 0};
	int ticket;

	//Function Calls:
	genLotto(winningDigits);
	userLotto(player);

	ticket = matches(winningDigits, player);

	print(winningDigits, player);

	isWinner(ticket);

	system("pause");
	return 0;
} 

//Generates a new random winning lottery number and stores it in an array.
void genLotto(int lottery[])
{
	unsigned seed = time(0);
	srand(seed);

	for (int i=0; i < SIZE; i++)
	{
		lottery[i] = 1 + rand() % LOTTERY_DIGITS;
	}
}

//Reads in user selected lotto numbers and stores them in an array.
void userLotto(int user[])
{	
    for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter a digit between 0 and 6: ";
		cin >> user[i];

		while (user[i] < 0 || user[i] > 6)
		{
			cout << "Invalid Entry, Try Again\nEnter a digit bewteen 0 and 6: ";
			cin >> user[i];
		}
	}
}

//Compares two arrays and keeps track of how many indicies match.
int matches(int lottery[], int user[])
{
	int ticket = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(lottery[i] == user[i])
        {
            ticket++;
        }
    }
	return ticket;
}

//Prints the contents of both arrays to the console. 
void print(int lottery[], int user[])
{
	cout << "\nThe winning lottery numbers are: ";
	for(int i = 0; i < SIZE; i++)
	{
        cout << lottery[i] << " ";
    }
	cout << "\n\nYour lottery numbers are: ";
	for(int i = 0; i < SIZE; i++)
	{
        cout << user[i] << " ";
    }
    cout << "\n\n";
}
 
//Outputs whether or not the selected numbers from the user were the winning
//numbers. 
void isWinner(int ticket)
{
	cout << "You matched " << ticket << " numbers" << endl;

	if (ticket == SIZE)
	{
		cout << "You Win!\n" << endl;
    }
	else
	{
		cout << "You Lost.\n" << endl;
    }
}
