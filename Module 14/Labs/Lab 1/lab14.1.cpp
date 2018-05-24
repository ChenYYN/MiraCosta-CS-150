// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 14 : Lab 1
//===============================
/*Program Description:
                    Write a modular program that accepts up to 20 integer exams
                    scores from the user in the range of 0 to 100 and determine
                    the number of perfect scores entered by the user. 
*/
//===============================
/*Algorithm:
            prompt the user for the number of tests scores they wany to enter.
            check to see if the number of exams is between 1 and 20.
            if invalid input is entered have the user try again.
            Add each score to an array and loop through the array to count the
            number of perfect scores.
            Output the results to the user. 
*/
#include<iostream>

using namespace std;

//Checks an exams score to see if it is 100.
int isPerfect(int exams)
{
	if (exams == 100)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//Reads in all the scores from 
int getScore(int numScores)
{
    int counter;
   	int exams[numScores];
    			
    for(int i = 0; i < numScores; i++)
    {
    	cout << "Enter score:";
	    cin >> exams[i];
	    
	    //checking for valid input.
	    if(exams[i] < 0 || exams[i] > 100)
	    {
            cout << "Invalid score... Discarded." << endl;
        }
        else
        {
    	   counter += isPerfect(exams[i]);
        }
    }
	return counter;
}
int main()
{
	//Vars.
	int scores;
	bool isValid = true;
	int count = 0;
	
	cout << "How many exams have you taken? :";
	cin >> scores;
	
	//Reading in the exams scores.
	while(isValid)
	{
		if((scores < 1) || (scores > 20))
		{
			cout << "\nError: Please enter a number of tests between 1 and 20.\n\nHow many exams have you taken? :";
			cin >> scores;
		}
		else
		{
            count = getScore(scores);
            isValid= false;
		}
	}
	cout << "There are/is " << count << " perfect score(s)." << endl;
	system ("pause");
	return 0;
}
