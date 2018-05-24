//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 4 : Lab 3
//===============================
//Program Description: calculates the needed ingredients for a batch of cookies.
//===============================
/*Algorithm:
            stores the numbers in named constants defined as doubles.
            stores the number of cookies that the above recipe makes in 
                   a named constant defined as an int.
            prompts the user for the number of cookies he/she wants to 
                    make, storing it in an int.
            calculates and displays the number of cups of each ingredient 
                       needed to make that number of cookes.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

const double SUGAR = 1.5;
const double BUTTER = 1;
const double FLOUR = 2.75;
const int BASE = 48;

int main(int argc, char *argv[])
{
    int cookies;
    double sug, but, flo, batch;
    
    cout << "How many cookies would you like to make? : ";
    cin >> cookies;
    
    batch = (double)cookies / BASE;
    sug = SUGAR * batch;
    but = BUTTER * batch;
    flo = FLOUR * batch;
    
    cout << "\nTo make " << cookies << " cookies, you will need: \n"
    << sug << " cups of sugar.\n" << but << " cups of butter.\n"
    << flo << " cups of flour.\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
