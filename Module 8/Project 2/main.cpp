//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 8 : Project 2
//===============================
/*Program Description:
                      Write a program that asks the user to enter
                      today's sales rounded to the nearest $100 for 
                      each of three stores. 
*/
//===============================
/*Algorithm:
            prompt the user for the sales for each day.
            store each day's data separately.
            construct a string of *'s based on the sales data. 
            print results for the user.
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int sales1, sales2, sales3;
    int star1, star2, star3;
    string bar1, bar2, bar3;
     
    cout << "Please enter today's sales for each store."
         << "\nRound each total to the nearest $100." << endl;
    
    for(int i = 0; i < 3; i++)
    {
        switch(i)
        {
            case 0 :
                cout << "\nStore 1: ";
                cin >> sales1;
                star1 = sales1 / 100;
                bar1.assign(star1, '*');
                break;
            case 1 :
                cout << "\nStore 2: ";
                cin >> sales2;
                star2 = sales2 / 100;
                bar2.assign(star2, '*');
                break;
            case 2 :
                cout << "\nStore 3: ";
                cin >> sales3;
                star3 = sales3 / 100;
                bar3.assign(star3, '*');
                break;
        }
    }
    
    cout << "\nDaily Sales: " << "\n(each * = $100)" << endl;
    cout << "\nStore 1: " << bar1
         << "\nStore 2: " << bar2
         << "\nStore 3: " << bar3 << "\n" << endl;
                     
    system("PAUSE");
    return EXIT_SUCCESS;
}
