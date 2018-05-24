//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 9 : Project 1
//===============================
/*Program Description:
                      Write a program which reads a grocery list from a text
                       file, then creates another text file containing a
                       formatted list of the itmes on that list.
*/
//===============================
/*Algorithm:
            Read the grocery list from the text files into the program.
            create an output file stream "grocery.rpt"
            Check to see if the file was able to open, if not exit.
            iterate through the text file with a while loop.
            format and output each set of data that was read from the
            text file to the the new file. 
            Added a grand total to the bottom of the program.
            close input file stream at the exit of the loop.
            close the output file steam at the end of the program.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //making constants
    const string list = "grocery.txt" ;
    const string list2 = "grocery.rpt" ;
    
    //opening file
    ifstream infile ;
    infile.open(list.c_str()) ;
    
    //outputting file
    ofstream outfile ;
    outfile.open(list2.c_str()) ;
    
    //checking output file
    if(!outfile)
    {
        cout << "CANNOT OPEN FILE" << endl;
        exit(1);
    }
    else 
    {
        
    }
    
    //constants in file
    int amount ;
    double price ;
    string unit ;
    string item ;
    double finalprice ;
    
    //outfile header
    outfile << "********Grocery List*******" << endl;
    outfile << setw(25) << left << "-----item-----" << setw(5) << right << "  amount" << setw(6) << "  price" << "  unit" << endl;
    outfile << "___________________________________" << endl;
    
    //looping for list
    while(!infile.eof())
    {
          getline(infile,item) ;
          infile >> amount ;
          infile >> price ; 
          getline(infile,unit) ;
          getline(infile,unit) ;
          outfile << setw(25) << left << item << ": " << setw(5) << right << amount << "x" << setw(6) << price << " " << unit << endl;
          finalprice += (amount * price);
    }
    
    //final price of the stuff
    outfile << "Your total comes to $" << finalprice << endl;
    
    system("pause");
    return 0 ;
}
