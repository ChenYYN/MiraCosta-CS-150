// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 5 : Lab 2
//===============================
//Program Description: will format a monthly budget report with four 
//                     items and a total for each item.
//===============================
/*Algorithm:
            Create four string variables for the item descriptions and 
            four double variables for their respective costs.
            Using several cout statements, print a formatted report 
            showing each item and its costs, along with a grand total 
            of all expenses for the month.
            format output as specified in the lab.
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    string rent, food, ent, misc;
    double rCost, fCost, eCost, mCost, total;
    
    string dash = "-";
    dash.assign(31, '-');
    
    rent = "Apartment";
    food = "Food";
    ent  = "Entertainment";
    misc = "Misc. and Taxes";
    
    rCost = 1487.90;
    fCost = 325;
    eCost = 70;
    mCost = 410.19;
    total = rCost + fCost + eCost + mCost;
    
    cout << "MONTHLY BUDGET REPORT: \n" << left << setw(10) << endl;
    cout << left << setw(20) << "Item" << left << setw(11) << "Expense" << endl;
    cout << dash << endl;
    cout << left << setw(20) << rent << "$" << right << setw(2) << fixed << setprecision(2) << right << setw(10) << rCost << endl;
    cout << left << setw(20) << food << "$" << right << setw(2) << fixed << setprecision(2) << right << setw(10) << fCost << endl;
    cout << left << setw(20) << ent << "$" << right << setw(2) << fixed << setprecision(2) << right << setw(10) << eCost << endl;
    cout << left << setw(20) << misc << "$" << right << setw(2) << fixed << setprecision(2) << right << setw(10) << mCost << endl;
    cout << right << right << setw(31) << "===========" << endl;
    cout << left << setw(20) << "(Total)" << "$" << right << setw(2) << fixed << setprecision(2) << right << setw(10) << total << endl;
    cout << "\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
