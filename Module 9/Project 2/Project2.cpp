//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 9 : Project 2
//===============================
/*Program Description:
                      rework the hotel occupancy problem from module 8's 
                      homework, reading the occupancy for each floor from a
                      file instead of from the console. 
*/
//===============================
/*Algorithm:
            Open a file stream to the text file, if error: exit.
            loop through the text file and as each floor is read in,
            output it to the console. 
            removed the data validation section, assuming all input read
            is valid. 
            The output to the console should remain in the same format.
            exit the loop and close all the file streams. 
*/

#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //init constants and variables
    const string FILE_NAME = "rooms.txt";
    const int TOTAL = 120;
    int occupied = 0;
    int totalOccupied = 0;
    
    //create input stream
    ifstream inFile(FILE_NAME.c_str());
    //error if input file cannot be found
    if(!inFile)
    {
        cout << "Couldn't open " << FILE_NAME << " - aborting" << endl;
        system("pause");
        exit(1);
    }
    
    //calculator title
    cout << "** Occupancy Calculator **" << endl;
    cout << "    Suites occupied on:" << endl << endl;

    //loop through each floor
    for (int i = 10; i <= 16; i++)
    {
        //continue loop if i = 13 since there is no 13th floor
        if (i == 13)
        {
            continue;
        }
        else
        {
            //read input from file
            inFile >> occupied;
            cout << "       floor " << i << ": " << right << setw(2) 
                                                        << occupied << endl;
            //add to total occupied
            totalOccupied += occupied;
        }
    }
    //close input stream
    inFile.close();
    
    //calculate percentage
    double percentage = ((double) totalOccupied / TOTAL) * 100;
    
    //print total
    cout << setw(23) << left << "\nTotal suites available:" << setw(5) 
                                                   << right << TOTAL << endl;
    //Print occupied
    cout << setw(23) << left << "Suites occupied:" << setw(5) << right 
                                                   << totalOccupied << endl;
    //print percentage
    cout << setw(22) << left << "Percentage occupied:" << setw(5) << right 
         << fixed << showpoint << setprecision(1) << percentage << "%" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
