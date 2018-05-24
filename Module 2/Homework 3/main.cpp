//Project Description: Write a program that computes the tac and tip on a 
//        restaurant bill for a patron with a $44.50 meal charge.
//Author: Jack Rollinson W7252829

#include <cstdlib>
#include <iostream>

using namespace std;

const double SUBTOTAL = 44.50;
const double TAXRATE = 0.0675;
const double TIPRATE = 0.15;

int main(int argc, char *argv[])
{
    double total = (SUBTOTAL + (SUBTOTAL * TAXRATE)) + (SUBTOTAL * TIPRATE);
    
    cout << "Subtotal: $" << SUBTOTAL << endl; 
    cout << "Tax: $" << (TAXRATE * SUBTOTAL) << endl;
    cout << "Tip: $" << (TIPRATE * SUBTOTAL) << endl;
    cout << "Total: $" << total << "\n\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
