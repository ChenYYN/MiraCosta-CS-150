// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 16 : Lab 2
//===============================
/*Program Description:
                    Write a program that creates two identical arrays (or vectors)
                    of at least SIZE double values ranging from 1 to 10 stored in 
                    a random order.  It should call a function that uses the 
                    bubble sort algorithm to sort one of the arrays in ascending 
                    order.  The function should update two variables in the 
                    calling program which record the number of comparisons and 
                    the number of exchanges the function makes to perform the 
                    sort.  The program should then call another function that 
                    uses a selection sort algorithm to sort the other array.  
                    It also should update two variables in the calling program 
                    for the number of comparisons and for the number of exchanges 
                    required by the selection sort.  Display the counts for both 
                    algorithms on the screen, as well as the first 20 values of 
                    each array after being sorted.
*/
//===============================
/*Algorithm:
            Display the counts for both algorithm's on the console for the user.
            Also out put the first 20 values of each array after being sorted. 
            Submit the arrays again to their respective sorting functions.
            Display the counts for both algorithms on the sceeen to compare
            performance changes in an already sorted array, same number of 
            comparisons, but no swaps.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//Arrays size.
const int SIZE = 500;

//Implements the selection sort algorithm, will sort the given array, and
//keep track of the number of swaps and comparisons made.
void selectionSort(double nums[], int length, int returns[])
{
	returns[0] = 0;
	returns[1] = 0;
	double temp;
	int smallest;
	
	for (int i = 0; i < length; i++)
	{
		smallest = i;
		for (int j = i; j < length; j++)
		{
			returns[0]++;
			if (nums[j] < nums[smallest])
			{
				returns[1]++;
				smallest = j;
			}
		}
		temp = nums[i];
		nums[i] = nums[smallest];
		nums[smallest] = temp;
	}
}
//Implements the bubble sort algorithm, will sort the given array, and
//keep track of the number of swaps and comparisons made. 
void bubbleSort(double nums[], int length, int returns[])
{
	returns[0] = 0;
	returns[1] = 0;
	double temp;
	bool isValid = true;
	
	while(isValid)
	{
		isValid = false;
		for (int i = 1; i < length; i++)
		{
			returns[0]++;
			if (nums[i] < nums[i - 1])
			{
				returns[1]++;
				isValid = true;
				temp = nums[i];
				nums[i] = nums[i - 1];
				nums[i - 1] = temp;
			}
		}
	}
}
//Fills the two given arrays with random double values between 1.0 and 10.0
void fillArrays(double array1[], double array2[], int length)
{
	unsigned seed = time(0);
	srand(seed);
	double currentDouble = 0.0;
	
	for (int i = 0; i < length; i++)
	{
		currentDouble = (rand() % 100) / 10.0 + 1.0;
		array1[i] = currentDouble;
		array2[i] = currentDouble;
	}
}
//Prints the given array in a nicely formatted table. 
void printArray(double array[])
{
    for (int i = 0; i < 20; i++)
	{
		if (!(i % 5))
		{
			cout << endl << "| ";
		}
		cout << array[i] << " | ";
	}
	cout << endl << endl;
}
int main()
{
	double array1[SIZE];
	double array2[SIZE];
	//swaps and comparisons
	int returns[] = { 0, 0 };

	fillArrays(array1, array2, SIZE);

	cout << fixed << setprecision(1); //keeping output to one decimal place.
    
    //Functions calls/ console output.
	selectionSort(array1, SIZE, returns);
	cout << "# of Selection Sort comparisons: " << returns[0] << endl;
	cout << "# of Selection Sort swaps: " << returns[1] << endl;
	printArray(array1);

	bubbleSort(array2, SIZE, returns);
	cout << "# of Bubble Sort comparisons: " << returns[0] << endl;
	cout << "# of Bubble Sort swaps: " << returns[1] << endl;
	printArray(array2);

    cout << "\n--Calling functions again, but arrays are already sorted--\n\n" 
         << endl;

	selectionSort(array1, SIZE, returns);
	cout << "# of Selection Sort comparisons: " << returns[0] << endl;
	cout << "# of Selection Sort swaps: " << returns[1] << endl;
	printArray(array1);

	bubbleSort(array2, SIZE, returns);
	cout << "# of Bubble sort comparisons: " << returns[0] << endl;
	cout << "# of Bubble sort swaps: " << returns[1] << endl;
	printArray(array2);
	
	system("pause");
	return 0;
}
