//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 8 : Project 1
//===============================
/*Program Description:
                      Write a program that calculates the occupancy 
                      of the 120 suites (20 per floor) located on the 
                      top six floors of a 15-story luxury hotel. 
*/
//===============================
/*Algorithm:
            using a single loop that iterates once for each 
            floor between 10 and 16.
            On each iteration, ask the user to input the number
            of suites occupies on that floor.
            Use a nested loop to validate that the value entered 
            by the user is between 0 and 20.
            After all of iterations, the program should display 
            how many suites the hotel has available, how many of 
            them are occupied, and the percentage occupied (to 1 or 2 places).
            make sure that the numbers in the summary are right-justified.
             
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

const int AVAILABLE = 120;

int main(int argc, char *argv[])
{
    int occupied = 0, 
        current;
    
    cout << "** Occupancy Calculator **\nHow many suites are occupied on: " 
         << endl; 
    
    for(int i = 0; i < 7; i++)
    {
        bool isValid = true;
        
        //skip floor 13.
        if(i == 3)
        {
            continue;
        }
        
        //input
        cout << "\nFloor " << 10 + i << ": ";
        cin >> current;
        
        //error check
        while(isValid)
        {
            if(current < 0 || current > 20)
            {
                cout << "\nInvaild room number, try again..." << endl;
                cout << "\nFloor " << 10 + i << ": ";
                cin >> current;
                isValid = true; //perform another check.
            }
            else
            {
                occupied += current;
                isValid = false;
            }
        }
    }      
    
    //output:
    cout << "\nTotal suites available: " << right << setw(8) << AVAILABLE << endl;
    cout << "Suites occupied: " << right << setw(15) << occupied << endl;
    cout << "Percentage occupied: " 
         << right << setw(11) << (occupied / (double)AVAILABLE) * 100.0
         << "%\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
