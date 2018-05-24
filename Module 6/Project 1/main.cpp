//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 6 : Project 1
//===============================
/*Program Description:
                      Predict a child's height, given 
                      its gender and height of its parents.
*/
//===============================
/*Algorithm:
            prompt the user for child gender, and the
                height of both parents.
            calculate childs adult hieght and output
                the results.
*/
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    string gender;
    int mom, dad, inches, feet;
    
    cout << "What is the gender of the child? (male/female) : ";
    cin >> gender;
    
    cout << "\nHow tall is the mother? (in inches) : ";
    cin >> mom;
    
    cout << "\nHow tall is the father? (in inches) : ";
    cin >> dad;
    
    if (!gender.compare("male"))
    {
		  inches = ceil(((mom * 13.0 / 12.0) + dad) / 2.0);
    }
    else if(!gender.compare("female"))
    {
	 	  inches = ceil((dad * 12.0 / 13.0) + mom) / 2.0; 
    }
    else
    {
	 	cout << "ERROR: Unrecognized Gender!" << endl;
    }
    
	feet = inches / 12;
	inches %= 12;
	
	cout << "\nChild Adult Height: " << feet << " feet, " << inches << " inches.\n" << endl;
	
    system("PAUSE");
    return EXIT_SUCCESS;
}
