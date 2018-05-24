// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 4 : Project 2
//===============================
//Program Description: Calculates the floor, ceiling, and absolute value of the
//                     given variable. 
//===============================
/*Algorithm:
            prompt the user for any floating-point number and store 
                   it in a double variable
            use the floor() function to display the floor value of that number
            use the ceil() function to display the ceiling value of that number
            type-cast the number to an int and display the absolute 
                      value of that number
*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double num;
    
    cout << "Please enter a floating-point number: " ;
    cin >> num;
    
    cout << "\nThe floor value of " << num << " is: " << floor(num)
         << "\n\nThe ceiling value of " << num << " is: " << ceil(num)
         << "\n\nThe absolute value of " << num << " is: " << abs((int)num)
         << "\n" << endl;
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
