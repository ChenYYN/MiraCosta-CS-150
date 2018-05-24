// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 15 : Lab 2
//===============================
/*Program Description:
                    Write a program that performs a linear search on an array of
                    numbers.
*/
//===============================
/*Algorithm:
            Create an array of 20 int values
            fill the array with random numbers 1 to 20.
            create a linear search function that returns the number of times the
            target number appears in the array.
            Create a loop which:
                prompts the user for a target number from 1 to 20.
                invokes the function described above, and tells the user the
                number of times the target number appears in the array.
                exit the loop when the value 0 is entered.
            Finally, print a summary report showing a count for how many times
            each number actually appears in the array, Use the function above
            to determine the counts. 
*/
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

//Implements the linear search algorithm, searchs for a given value in the given array.
int linearSearch(const int array[], int size, int value)
{
    int count = 0;
    
    for(int i = 0; i < size; i++)
    {
        if(array[i] == value)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int myArray[20];
    
    unsigned seed = time(0);     
    srand(seed);
    
    //Filling the array
    for (int i = 0; i < 20; i++)    
    {                               
        myArray[i] = rand() % 20 + 1;
    }
    //Prompt the user for a search value
    int target;
    do
    {
        //input
        cout << "Enter a number between 1-20 (0 to exit): ";
        cin >> target;
        
        //output
        int found = linearSearch(myArray, 20, target);
        cout << "\nThere are " << found << " instance(s) of: " << target << "\n\n";
        
    } while (target !=0);
    
    //print report of all number appearances using linearSearch function
    cout << "Number  Count" << endl;
    cout << "======  =====" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << left << setw(8) << myArray[i + 1]
             << linearSearch(myArray, 20, i + 1) << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
