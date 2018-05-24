// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 5 : Project 3
//===============================
/*Program Description: calculates and reports the owner will be charged on his
                       property.
*/
//===============================
/*Algorithm:  asks the user to enter the actual value of a piece of property 
              and the current tax rate for each $100 of assessed value.
              calculate and report how much annual property tax the homeowner 
              will be charged for this property.
              Ensure that all of your numbers are right-justified, and all 
              dollar values are printed to two decimal places.
              return formatted output.
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Assessed percentage rate:
const double APR = 0.60;

int main(int argc, char *argv[])
{
    //Vars
    double actual, assessed, rate, tax;
    
    //Input
    cout << "Please enter the actual value of your home: ";
    cin >> actual;
    
    cout << "\nPlease enter the current tax rate per $100 of assessed value: ";
    cin >> rate;
    
    //Maths
    assessed = actual * APR;
    tax = assessed * (rate / 100.00);
    
    //Output
    cout << "\nActual Value of Property  : " << setw(8) << right 
         << "$" << setw(2) << right
         << fixed << setprecision(2) << setw(10) << right << actual
         
         << "\nAssessed Percentage Rate  : " << setw(18) << right
         << fixed << setprecision(2) << (APR * 100) << "%"
         
         << "\nAssessed Value            : " << setw(8) << right 
         << "$" << setw(2) << right
         << fixed << setprecision(2) << setw(10) << right << assessed
         
         << "\nTax Rate per $100 of Value: " << setw(8) << right 
         << "-$" << setw(2) << right
         << fixed << setprecision(2) << setw(10) << right << rate
         
         << "\nProperty Tax              : " << setw(8) << right 
         << "-$" << setw(2) << right
         << fixed << setprecision(2) << setw(10) << right << tax
         
         << "\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
