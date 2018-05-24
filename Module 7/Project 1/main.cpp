//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 7 : Project 1
//===============================
/*Program Description:
                      Determine the area of various geometric figures.
*/
//===============================
/*Algorithm:
            Write a program that displays a menu to the user.
            If the user enters C, the program should ask for the 
                radius of a circle and then display its area.
            If the user enters R, the program should ask for the 
            length and width of a rectangle, and then display the rectangle's area.
            If the user enters T, the program should ask for the length of a
            triangle's base and its height, and then display its area.
            If the user enters Q, the program should end.
            Allow the user to enter either upper or lower-case letters.
            Calculate the results.
            Output results for user.
*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main(int argc, char *argv[])
{
    double area;
    char choice;
    
    cout << "****** Geometric Figure Calculator ******"
         << "\nC - Calculate the area of a Circle." 
         << "\nR - Calculate the area of a Rectangle."
         << "\nT - Calculate the area of a Triangle."
         << "\nQ - Quit the program." 
         << "\n\nEnter your choice: ";
    cin >> choice;
    choice = toupper(choice);
    
    if(choice == 'C')
    {
        double radius;
        
        cout << "\nWhat is the length of the radius? : ";
        cin >> radius;
        
        area = PI * pow(radius, 2.0);
        
        cout << "The area of the circle is: " << area << " units squared."
             << "\n" << endl;
    }
    else if(choice == 'R')
    {
        double length, width;
        
        cout << "\nWhat is the length of the rectangle? : ";
        cin >> length;
        cout << "\nWhat is the width of the rectangle? : ";
        cin >> width;
        
        area = length * width;
        cout << "The area of the rectangle is: " << area << " units squared."
             << "\n" << endl;        
    }
    else if(choice == 'T')
    {
        double base, height;
        
        cout << "\nWhat is the base of the triangle? : ";
        cin >> base;
        cout << "\nWhat is the height of the triangle? : ";
        cin >> height;    
        
        area = (base * height) / 2.0;
        cout << "The area of the triangle is: " << area << " units squared."
             << "\n" << endl;            
    }
    else if(choice == 'Q')
    {
        cout << "\nShutting down program..." << endl;
        system("PAUSE");
        return EXIT_SUCCESS;
    }
    else
    {
        cout << "\nInvalid selection, exiting program..." << endl;
        system("PAUSE");
        return EXIT_SUCCESS;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
