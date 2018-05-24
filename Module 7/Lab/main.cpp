//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 7 : Lab
//===============================
/*Program Description:
                      Write a program that determines the total 
                      price to rent a car based on certain parameters 
                      which the user will enter from their keyboard.
*/
//===============================
/*Algorithm:
            prompt the user for inforation on the size of the car, the color,
            and the number of days they want it for.
            Calculate number of weeks and days.
            Calculate two quotes:
            one quote which is the number of complete weeks multiplied
            by the weekly rate plus the number of leftover days times 
            the daily rate.
            the second quote will be the number of complete weeks plus 1, 
            and that number multiplied by the weekly rate.
            find the most favorable rate for the user.
            add a surcharge if the car is red.
            output the rental quote for the user.     
*/
#include <cstdlib>
#include <iostream>

using namespace std;

const double ECO_DAILY = 25.50;
const double ECO_WEEKLY = 120.50;
const double FULL_DAILY = 39.40;
const double FULL_WEEKLY = 216.25;

int main(int argc, char *argv[])
{
    //vars
    string color, sizeString;
    int days, weeks;
    char size;
    double quote1, quote2, finalQuote, dailyRate, weeklyRate;
    
    //input
    cout << "E = Economy Size; F = Full Size" << endl;
    cout << "What size car would you like to rent? (E/F) : ";
    cin >> size;
    size = toupper(size);
    
    cout << "What color would you like? : ";
    cin >> color;
    
    cout << "How many days would you like to rent the car? : ";
    cin >> days;
    
    //caculate number of weeks and days
    weeks = days / 7;
    days %= 7;
    
    //calculate base fees
    switch(size - 'A')
    {
        case 4 : 
            sizeString = "Economy-Size";
            dailyRate = ECO_DAILY;
            weeklyRate = ECO_WEEKLY;
            
            quote1 = (weeks * ECO_WEEKLY) + (days * ECO_DAILY);
            quote2 = (weeks * ECO_WEEKLY) + ECO_WEEKLY;
            break;
        case 5 :
            sizeString = "Full-Size";
            dailyRate = FULL_DAILY;
            weeklyRate = FULL_WEEKLY;
            
            quote1 = (weeks * FULL_WEEKLY) + (days * FULL_DAILY);
            quote2 = (weeks * FULL_WEEKLY) + FULL_WEEKLY;
            break;
        default : 
            cout << "Invlaid selection..." << endl;
            system("PAUSE");
            return EXIT_SUCCESS;
    }
    
    //Give the customer the best quote.
    if(quote1 <= quote2)
    {
        finalQuote = quote1;
    }
    else
    {
        finalQuote = quote2;
    }
    
    //add surcharge for red car
    if(color == "red")
    {
        finalQuote += (finalQuote * 0.15);
    }
    
    //output
    cout << "\nQuote for a " << color << " " << sizeString << " car: \n" 
         << weeks << " week(s) at $" << weeklyRate << "/week and " << days
         << " day(s) at $" << dailyRate << "/day, total: $" << finalQuote
         << "\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
