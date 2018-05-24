//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 10 : Project 2
//===============================
/*Program Description:
                      converts temperatures using a function. 
*/
//===============================
/*Algorithm:
            The function will take two in a double for the degrees, and a char
            for the measure of temperature.
            Calculate and convert the temperature
            output results to the console.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

void convert(double degrees, char scale);

int main(int argc, char *argv[])
{
    convert(100.0, 'C');
    convert(32.0, 'f');
    convert(-40, 'c');
    convert(0, 'X');
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void convert(double degrees, char scale)
{
    double answer;
    scale = toupper(scale);
    
    if(scale == 'F')
    {
        answer = 5 * (degrees - 32) / 9.0;
        cout << degrees << " Fahrenheit is " << answer << " Celsius." << endl;
    }
    else if(scale == 'C')
    {
        answer = (9 / 5.0) * degrees + 32;
        cout << degrees << " Celsius is " << answer << " Fahrenheit." << endl;
    }
    else
    {
        cout << "Invalid scale, shutting down..." << endl;
    }
}
    
    
