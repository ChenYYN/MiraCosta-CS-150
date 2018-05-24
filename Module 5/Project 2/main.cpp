// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 5 : Project 2
//===============================
/*Program Description: displays a theater's gross and net box office 
                       revenue for a night.  The program should ask 
                       for the name of the movie, and how many adult
                       and child tickets were sold.
*/
//===============================
/*Algorithm:
            prompt user for the name of the movie and the amount of tickets
                   sold.
            calculate gross revenue, then the amount paid to distributor.
            calculate net box office revenue.
            output the results to the user in a formatted table. 
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Revenue of gross ticket sales.
const double REV = .80;
//Ticket prices.
const double ADULT = 10.0;
const double CHILD = 6.0;

int main(int argc, char *argv[])
{
    //vars
    string dash = "-";
    dash.assign(46, '-');
    string movie;
    double dist, gross, net, 
           adultNum, childNum;
    
    //input
    cout << "What is the name of the movie? : ";
    getline(cin, movie);
    
    cout << "\nHow many adult tickets were sold? : ";
    cin >> adultNum;
    
    cout << "\nHow many child tickets were sold? : ";
    cin >> childNum;
    
    //maths
    gross = (adultNum * ADULT) + (childNum * CHILD);
    net = gross * REV;
    dist = gross - net;
    
    //output
    cout << "\n" << dash
         << setw(12) << left << "\nMovie Name: " << movie
         << setw(20) << left << "\nAdult Tickets Sold: " << adultNum
         << setw(20) << left << "\nChild Tickets Sold: " << childNum
         << "\n" << dash
         << setw(20) << left << "\nGross Box Office Revenue    : " << setw(8) << right
         << "$" << fixed << setprecision(2) << setw(8) << right << gross
         << setw(20) << left << "\nAmount Paid to Distributor  : " << setw(8) << right
         << "-$" << fixed << setprecision(2) << setw(8) << right << dist
         << setw(20) << left << "\nNet Box Office Revenue      : " << setw(8) << right
         << "$" << fixed << setprecision(2) << setw(8) << right << net
         << "\n" << dash 
         << "\n" << endl;
       
    system("PAUSE");
    return EXIT_SUCCESS;
}
