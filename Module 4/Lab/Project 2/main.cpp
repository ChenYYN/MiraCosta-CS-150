//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 4 : Lab 2
//===============================
//Program Description: Converts USD to the other top five most used currencies
//                     in the world.
//===============================
/*Algorithm:
            make constants for each currency and its conversion.
            prompt the user for the number of USD they would like to convert. 
            calculate the converstion and output the results to the user. 
*/
#include <cstdlib>
#include <iostream>

using namespace std;

const double EURO = 0.81;
const double YEN = 106.31;
const double YUAN = 6.35;
const double POUND = 0.71;
const double CDOLLAR = 1.26;

int main(int argc, char *argv[])
{
    int usd;
    
    cout << "How much money ya got? (In USD): ";
    cin >> usd;
    
    cout << "\n$" << usd << " USD is worth:" << endl;
    cout << usd * EURO << " euros, the exchange rate is: " << EURO << " per usd." << endl;
    cout << usd * YEN << " yen, the exchange rate is: " << YEN << " per usd." << endl;
    cout << usd * YUAN << " yuan, the exchange rate is: " << YUAN << " per usd." << endl;
    cout << usd * POUND << " pounds, the exchange rate is: " << POUND << " per usd." << endl;
    cout << usd * CDOLLAR << " canadian dollars, the exchange rate is: " 
    << CDOLLAR << " per usd.\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
