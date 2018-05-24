//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 3 : Project 3
//===============================
//Program Description: Determines the chage to be dispensed from a vending
//                     machine.
//===============================
/*Algorithm:
            read total cost from user in cents. 
            calculate the change, output to user. 
            calculate the total amount of quarters first.
            calculate the total amount of dimes next.
            calculate the total amount of nickels last.
            output the final results to the user. 
*/            
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int quarter, dime, nickel, change, payment, cost; 
    
    cout << "Please enter the total cost in CENTS: " ;
    cin >> cost;
    payment = 100;
    change = payment - cost;
    
    cout << "\nThe price of your item is " << cost 
    << " cents, and you gave me $" << (payment / 100) << endl;
    cout << "Your change is " << change << " cents:" << endl;
    
    quarter = (change / 25);
    cout << quarter << " quarters," << endl;
    
    dime = ((change - (quarter * 25)) / 10);
    cout << dime << " dimes, and" << endl;
    
    nickel = ((change - ((quarter * 25) + (dime * 10))) / 5);
    cout << nickel << " nickels." << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
