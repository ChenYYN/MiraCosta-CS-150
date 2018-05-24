// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 4 : Project 1
//===============================
//Program Description: Calculates the area and volume of a sphere.
//===============================
/*Algorithm:
            prompts the user to enter the radius of a sphere and 
                    stores it in a double variable named "radius"
            calculates and displays the sphere's area
            calculates and displays the sphere's volume 
*/
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    double radius, area, volume;
    
    cout << "Please enter the length of the radius: " ;
    cin >> radius;
    
    area = 4 * M_PI * pow(radius, 2.0);
    cout << "\nThe surface area of the sphere is: " 
    << area << " units squared." << endl;
    
    volume = (4 / 3) * M_PI * pow(radius, 3.0);
    cout << "\nThe volume of the sphere is: " 
    << volume << " units cubed.\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
