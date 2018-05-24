// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 4 : Project 3
//===============================
//Program Description: Calculates the degrees and radians of a given angle, also
//                     finds the sine, cosine, and tangent values.
//===============================
/*Algorithm:
            prompts the user to enter an angle's value (in degrees) and 
                    stores that number in an int variable named "degrees"
            converts that number to radians using the following formula:
                     radians = p * degrees / 180
                     (use the named constants M_PI for the value of pi).
            uses the sin(), cos(), and tan() functions in the cmath 
                     library to calculate the sine, cosine, and tangent
                     values for the specified angle.
            displays the angle in both degrees and radians
*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int degrees;
    double radians;
    
    cout << "Please enter an angle in degrees: ";
    cin >> degrees;
    
    radians = M_PI * degrees / 180.0;
    
    cout << "\nAngle in degrees is: " << degrees
         << "\nAngle in radians is: " << radians
         << "\n\nThe sine of the angle is: " << sin(radians)
         << "\nThe cosine of the angle is: " << cos(radians)
         << "\nThe tangent of the angle is: " << tan(radians)
         << "\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
