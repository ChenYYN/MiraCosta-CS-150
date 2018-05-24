//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 7 : Project 2
//===============================
/*Program Description:
                      Provide a bill for a mobile service provider.
*/
//===============================
/*Algorithm:
             It should prompt for the customer name, which package the 
             customer has purchased, and how many minutes were used.
             It should then create a bill that includes the input 
             information and the total amount due.
             It should also display how much money Package A customers 
             would save if they had purchased package B or C, and how 
             much money package B customers would save if they had purchased 
             package C.
             If there would be no savings, then no savings message(s) 
             should be printed.
             After input, based on the selected package, calculate total bill,
             and any applicable savings.
             Output results to user, and savings if any.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

//Package A:
const double MONTHLY_A = 39.99;
const double OVER_A = 0.45;
const int MINS_A = 450; 
//Package B:
const double MONTHLY_B = 59.99;
const double OVER_B = 0.40;
const int MINS_B = 900;
//Package C:
const double MONTHLY_C = 69.99;
//no overages or minute cap.

int main(int argc, char *argv[])
{
    //vars:
    string name;
    char package;
    int minUsed, minOver;
    double fee, overage, savingsB, savingsC, monthly;
    bool savings;
    
    //input:
    cout << "What is your name? : ";
    cin >> name;
    
    cout << "\nWhat package have you purchased? (A, B, or C): ";
    cin >> package;
    package = toupper(package);
    
    cout << "\nHow many minutes did you use in the last pay cycle? : ";
    cin >> minUsed;
    
    //calculations:
    switch(package - 'A')
    {
        case 0 : 
            monthly = MONTHLY_A;
            minOver = minUsed - MINS_A;
            if(minOver <= 0)
            {
                fee = MONTHLY_A;
                overage = 0;
                savings = false;
            }
            else
            {
                overage = minOver * OVER_A;
                fee = overage + MONTHLY_A;
                
                savingsB = fee - (((minUsed - MINS_B) * OVER_B) + MONTHLY_B);
                savingsC = fee - MONTHLY_C;
                if(savingsB <= 0 && savingsC <= 0)
                {
                    savings = false;
                }
                else
                {
                    savings = true;
                }   
            }
            break;
        case 1 : 
            monthly = MONTHLY_B;
            minOver = minUsed - MINS_B;
            if(minOver <= 0)
            {
                fee = MONTHLY_B;
                overage = 0;
                savings = false;
            }
            else
            {
                overage = minOver * OVER_B;
                fee = overage + MONTHLY_B;
                
                savingsC = fee - MONTHLY_C;
                if(savingsC <= 0)
                {
                    savings = false;
                }
                else
                {
                    savings = true;
                }
            }
            break;
        case 2 : 
            monthly = MONTHLY_C;
            overage = 0;
            fee = MONTHLY_C;
            break;
        default : 
            cout << "Invalid Package.";
            break;
    }
    //output:
    cout << "\nPlan Type: Package " << package
         << "\nCustomer: " << name
         << "\n================"
         << "\nMinutes Used: " << minUsed
         << "\nMonthly : $" << monthly
         << "\nOverages: $" << overage
         << "\nTotal Amount Due: $" << fee << endl;
    if(savings && package == 'A')
        cout << "You could have saved: $" << savingsB 
             << ", if you upgrade to package B!"
             << "\nYou could have saved: $" << savingsC
             << ", if you upgrade to package C!"
             << "\n" << endl;
    else if(savings && package == 'B')
        cout << "You could have saved: $" << savingsC
             << ", if you upgrade to package C!"
             << "\n" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
