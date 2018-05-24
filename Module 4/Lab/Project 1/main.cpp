//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 4 : Lab 1
//===============================
//Program Description: Calculates a cars miles per gallon.
//
//===============================
/*Algorithm:
            prompt the user to enter the number of gallons the car's gas tank
            can hold.
            prompt the user to enter the number of miles that can be driven on
            a tank of gas.
            calculate the mpg.
            output the results to the user. 
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int tank, miles;
    double mpg;
    
    cout << "MPG Claculator:\n\n" 
    << "Please enter the number of gallons the car's gas tank can hold: ";
    cin >> tank;
    cout << "\nPlease enter the number of miles that can be driven on on a tank of gas: ";
    cin >> miles;
    
    mpg = miles / (double)tank;
    
    cout << "\nThe MPG for your car is: " << mpg << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
