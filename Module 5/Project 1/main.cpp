// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 5 : Project 1
//===============================
//Program Description: calculates the total revenue from softball tickets
//===============================
/*Algorithm:
            Ask the user how many tickets for each class of seats sold.
            Format output, calculate income per class and total.
            Output revenue of each class of seat and the total in a formated
                   manner.
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Class seats:
const double A = 15.00;
const double B = 12.00;
const double C = 9.00;

int main(int argc, char *argv[])
{
    //vars
    double saleA, saleB, saleC, total;
    int seats;
    
    cout << "How many Class A seats were sold? : ";
    cin >> seats;
    saleA = A * seats;
    
    cout << "\n\nHow many Class B seats were sold? : ";
    cin >> seats;
    saleB = B * seats;
    
    cout << "\n\nHow many Class C seats were sold? : ";
    cin >> seats;
    saleC = C * seats;
    
    total = saleA + saleB + saleC;
    
    //final output.
    cout << "\nSales totals: \n" 
         << "=============\n" 
         << "\nClass A: $" << fixed << setprecision(2) << saleA
         << "\nClass B: $" << fixed << setprecision(2) << saleB
         << "\nClass C: $" << fixed << setprecision(2) << saleC
         << "\n------------------"
         << "\nTotal  : $" << fixed << setprecision(2) << total
         << "\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
