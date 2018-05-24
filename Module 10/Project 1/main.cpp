//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 10 : Project 1
//===============================
/*Program Description:
                      Print triangles to the screen using a function call.
*/
//===============================
/*Algorithm:
            loop to ask user to enter a height for the triangle.
            if the height is 0 then exit the program.
            else print a triangle of the that height and then loop again.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

void triangle(int height);
int main(int argc, char *argv[])
{
    int height;
    
    while(true)
    {
        cout << "\nEnter the hieght of the triangle: ";
        cin >> height;
        
        if(height == 0)
        {
            system("PAUSE");
            return EXIT_SUCCESS;
        }
        else
        {
            triangle(height);
        }
    }              
    system("PAUSE");
    return EXIT_SUCCESS;
}
void triangle(int height)
{
    string space = "*";
     
    for(int i = 1; i <= height; i++)
    {
        space.assign(i, '*');
        cout << space << endl;
    }
    for(int i = height - 1; i > 0; i--)
    {
        space.assign(i, '*');
        cout << space << endl;
    }
}
    
