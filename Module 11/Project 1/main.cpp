//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 11 : Project 1
//===============================
/*Program Description:
                      Convert the program from homework 7 which calculates the
                      area of various geometric figures to use functions for the
                      menu and for each seletion of the menu.
*/
//===============================
/*Algorithm:
            Same algorithm for selection as assignment number 7, but added some
            functions and some addtional choices to the menu. 
*/
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

//prototypes.
char menu();
void sphere();
void cube();
void pyramid();

int main(int argc, char *argv[])
{
    //menu selection loop.
    while(true)
    {
        char choice = menu();
        
        if(choice == 'C')
        {
            double radius, area;
            
            cout << "\nWhat is the length of the radius? : ";
            cin >> radius;
            
            area = M_PI * pow(radius, 2.0);
            
            cout << "The area of the circle is: " << area << " units squared."
                 << "\n" << endl;
        }
        else if(choice == 'R')
        {
            double length, width, area;
            
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
            double base, height, area;
            
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
        else if(choice == 'S')
        {
            sphere();
        }
        else if(choice == 'U')
        {
            cube();
        }
        else if(choice == 'P')
        {
            pyramid();
        }
        //exits if invalid menu selection.
        else
        {
            cout << "\nInvalid selection, exiting program..." << endl;
            system("PAUSE");
            return EXIT_SUCCESS;
        }
    }
}

//menu display and records the users choice. 
char menu()
{   
    char choice;
     
    cout << "\n\n****** Geometric Figure Calculator ******"
         << "\nS - Calculate the area and volume of a Sphere."
         << "\nU - Calculate the area and volume of a Cube."
         << "\nP - Calculate the area and volume of a Pyramid."
         << "\nC - Calculate the area of a Circle." 
         << "\nR - Calculate the area of a Rectangle."
         << "\nT - Calculate the area of a Triangle."
         << "\nQ - Quit the program." 
         << "\n\nEnter your choice: ";
    cin >> choice;
    choice = toupper(choice);
    return choice; 
}
//calculates the volume and area of a sphere, reads in user input.
//checks for valid input.
void sphere()
{
    double area, volume, radius;
    
    //loops until valid input.
    while(true)
    {
        cout << "\nPlease enter the radius of the Sphere: ";
        cin >> radius;
        
        if(radius < 0)
        {
            cout << "\nError: Negative value try again." << endl;
            continue;
        }
        else
        {
            area = 4.0 * M_PI * pow(radius, 2);
            volume = 4.0 / (3.0 * M_PI * pow(radius, 3));
            
            cout << "\nThe area is: " << area << " The volume is: " << volume << endl;
            break;
        }
    }      
}
//calculates the volume and area of a cube, reads in user input.
//checks for valid input.
void cube()
{
    double area, volume, side;
    
    //loops until valid input.
    while(true)
    {
        cout << "\nPlease enter the length of the side of the Cube: ";
        cin >> side;
        
        if(side < 0)
        {
            cout << "\nError: Negative value try again." << endl;
            continue;
        }
        else
        {
            area = 6.0 * pow(side, 2);
            volume = pow(side, 3);
            
            cout << "\nThe area is: " << area << " The volume is: " << volume << endl;
            break;
        }
    }
}
//calculates the volume and area of a pyramid, reads in user input. 
//checks for valid input.
void pyramid()
{
    double area, volume, height, base;
    
    //loops until valid input.
    while(true)
    {
        cout << "\nPlease enter the height and base of the Pyramid: \n\n";
        cin >> height >> base;
        
        if(height < 0 || base < 0)
        {
            cout << "\nError: Negative value try again." << endl;
            continue;
        }
        else
        {
            area = pow(base, 2) + 2.0 * base * sqrt((pow(base, 4)/4.0) + pow(height, 2));
            volume = base * height / 3.0;
            
            cout << "\nThe area is: " << area << " The volume is: " << volume << endl;
            break;
        }
    }
}


