// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 16 : Lab 1
//===============================
/*Program Description:
                    Write a program that creates an array of size 1000, storing
                    values in ascending order. It should call a function which
                    uses a linear seach algorithm to locate one of the values
                    in the array and returns a count of the number of comparisons
                    it makes until it finds the specified value. The program
                    should then call another function that uses a binary search
                    to locate the same value in the array and return a count of
                    the number of comparisons it makes. The program should then
                    display the two counts on the screen.
*/
//===============================
/*Algorithm:
            Create a new array of size 1000 and sort the values in ascending
            order.
            Loop to perform a binary search and a linear search on each test
            case.
            Output the results of each test case and the number of iterations
            for each search to console.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 1000;

//Performs a binary search on a given array of size length, for the given value.
int binarySearch(int value, int nums[], int length)
{
	int count = 0;
	int index = (length / 2) - 1;
	int change = length / 4;
	
	while(true)
	{
		count++;
		
		if (nums[index] == value)
		{
			return count + 1;
		}
		else if (change == 0)
		{
			return -1;
		}
		else if (nums[index] > value)
		{
			index = index - change;
			change = change / 2;
		}
		else if (nums[index] < value)
		{
			index = index + change;
			change = (change + 1) / 2;
		}
	}
}
//Performs a linear search on a given array or size length for the given value.
int linearSearch(int value, int nums[], int length)
{
	int count = 0;
	
	for (int i = 0; i < length; i++)
	{
        count++;
        
		if (value == nums[i])
		{
			return count;
        }
	}
	return -1; //value either not found, or index is out of bounds.
}
//Fills a given array with random int values in un-sorted order. 
void createSortedArray(int nums[], int length)
{
	unsigned seed = time(0);
	srand(seed);
	
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		count += (rand() % 4) + 1;
		nums[i] = count;
	}
}
//Main method, contains all console output.
int main()
{
    //Declare and filling the array
	int sortedArray[SIZE];
	createSortedArray(sortedArray, SIZE);
	
	int testCases[] = { 271, 499, 624, 999, SIZE + 1 };

	for (int i = 0; i < sizeof(testCases) / sizeof(int); i++)
	{	
		cout << "\nIndex: " << testCases[i] << endl;
		cout << "Binary search: " << binarySearch(sortedArray[testCases[i]], sortedArray, SIZE) << endl;
		cout << "Linear search: " << linearSearch(sortedArray[testCases[i]], sortedArray, SIZE)
             << "\n" << endl;
	}
	system("pause");
	return 0;
}
