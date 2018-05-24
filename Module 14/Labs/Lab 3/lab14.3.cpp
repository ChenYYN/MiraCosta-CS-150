// Author: Jack Rollinson W72SIZE2829
// CS1SIZE0 Spring 2018
// Module 14 : Lab 3
//===============================
/*Program Description:
                    Write a program that calculates the average of a group of SIZE
                    test scores, where the lowest score in the group is dropped.
                    Please see lab project 3 from module 11 for a more detailed
                    description.
*/
//===============================
/*Algorithm:
            Define the required functions and scores all of them in the main
            function.
            First calls getScore() to prompt the user for a list of scores scores.
            Find the lowest value using a linar search and save the value.
            Calculate the average and output the results to the user. 
*/
#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 5;

int low = 100;
int scores[SIZE];

//Finds the lowest score in the array.
int findLow()
{
	for(int i = 0; i < SIZE; i++)
	{
		if((scores[i] < low) && (scores[i] >= 0))
		{
			low = scores[i];
		}
	}
	return low;
}
//Prompts the user to enter all the test scores. 
void getScore()
{
	for(int i = 0; i < SIZE; i++)
	{
        while(true)
        {
    		cout << "What is the score for Exam " << i+1 << "? :";
    		cin >> scores[i];
    		
    		if(scores[i] < 0 || scores[i] > 100)
    		{
                cout << "Invalid score, try again." << endl;
                continue;
            }
            else
            {
                break;
            }
        }
	}
}
//Calculates the average score and then outputs the result to the console.
void calcMean()
{
	int total= 0;
	
	for (int i = 0; i < SIZE; i++)
	{
		total += scores[i];
	}

	total = total - low;
	int average = total / 4;

	cout << "The average score on your exams was: " << average 
         << "; without the lowest score of: " << low << endl;
}
//Calls all the above functions and exits program. 
int main()
{
	getScore();
	low = findLow();
	calcMean();
	
	system("pause");
	return 0;
}
