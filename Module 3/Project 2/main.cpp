//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 3 : Project 2
//===============================
//Program Description: Converts degrees Fahrenheit to Celsius
//===============================
/*Algorithm:
            read in tempature in fahrenheit from the user.
            convert to celsius from fahrenheit.
            output results to the user. 
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int fahrenheit; 
    double celsius;
    
    cout << "Please enter a temperature (in Fahrenheit): " ;
    cin >> fahrenheit ;
    
    celsius = ((5 * (fahrenheit - 32)) / 9);
    
    cout << fahrenheit << " degrees Fahrenheit = " << celsius << " degrees Celsius." << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
