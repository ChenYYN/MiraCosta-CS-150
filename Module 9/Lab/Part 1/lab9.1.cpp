//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 9 : Lab Part 1
//===============================
/*Program Description:
                      Write a program which reads a grocery list from a text
                       file, then creates another text file containing a
                       formatted list of the itmes on that list. 
*/
//===============================
/*Algorithm:
            Read the grocery list from the text files into the program.
            Check to see if the file was able to open,
            iterate through the text file with a while loop.
            format and output each set of data that was read from the
            text file to the console. 
            close input file stream at the exit of the loop.
*/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    //making constants
    const string list = "grocery.txt" ;
    
    //opening file
    ifstream infile ;
    infile.open(list.c_str()) ;
    
    //constants in file
    int amount ;
    double price ;
    string unit ;
    string item ;
    double finalprice ;
    
    //looping for list
    while(!infile.eof())
    {
          getline(infile,item) ;
          infile >> amount ;
          infile >> price ; 
          getline(infile,unit) ;
          getline(infile,unit) ;
          cout << item << ": " << amount << "x" << price << " " << unit << endl;
          finalprice += (amount * price);
    }
    
    //final price of the stuff
    cout << "Your total comes to $" << finalprice << endl;
    
    system("pause");
    return 0 ;
}
