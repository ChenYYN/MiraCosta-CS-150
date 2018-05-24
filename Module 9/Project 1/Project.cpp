//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 9 : Project 1
//===============================
/*Program Description:
                      Print the students appearing in lineups for three different
                      classes in an Elementary School. 
*/
//===============================
/*Algorithm:
            open the three text file streams, if error: exit.
            process each of the text files using a for loop.
            use a nested lopp to scan the names of all the students in that class.
            Display which student would be at the head of the line and which 
            would be at the end of the line.
            Assume that no two students have the same name in a class.
            format the output to the console. 
            close all file streams in use. 
*/
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main()
{
    //print table heading
    cout << "Lineup    Teacher   First Student   Last Student" << endl;
    cout << "-------  ---------  -------------  --------------" << endl;
    
    //init strings for txt file names
    string filePrefix = "Lineup";
    string fileSuffix = ".txt";
    //string to take numbers from for file names
    string nums = "123";
    
    //for loop to read all 3 files
    for(int i = 0; i < 3; i++)
    {   
        //print lineup # and teacher name depending on which loop
        if (i == 0)
        {
            cout << right << setw(7) << "1" << "   " << left << setw(10) << "Leslie";
        }
        else if (i == 1)
        {
            cout << right << setw(7) << "2" << "   " << left << setw(10) << "Robert";
        }
        else 
        {
            cout << right << setw(7) << "3" << "   " << left << setw(10) << "Alice";
        }
        
        //build file name
        string fileName = filePrefix + nums.at(i) + fileSuffix;
        //init input stream
        ifstream inFile;
        //open file using string just built
        inFile.open(fileName.c_str());
        
        //if file could not be opened properly
        if(!inFile)
        {
            cout << "Couldn't open " << fileName << " - aborting" << endl;
            system("pause");
            exit(1);
        }
        
        //algorithm to find first and last of each lineup
        string first, last, temp;
        inFile >> first;
        last = first;
        while(inFile >> temp)
        {
            if (first.compare(temp) > 0)
            {
                first = temp;
            }
            if (last.compare(temp) < 0)
            {
                last = temp;
            }
        }
        //print first and last in formatted table
        cout << setw(15) << first << last << endl;
        //close input stream
        inFile.close();
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
