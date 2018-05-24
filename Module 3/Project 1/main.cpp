//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 3 : Project 1
//===============================
//Program Description: Calculates the number of calories burned for various
//                     activities.
//===============================
/*Algorithm:
            convert users weight to kilos
            calculate the calories burned for each activity.
            keep track of total calories burned.
            output results for the user.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

//METS:
const int RUNNING = 10;
const int BASKETBALL = 8;
const int SLEEPING = 1;
const double RATE = 0.0175;

int main(int argc, char *argv[])
{
    //variables:
    int weight;
    double kilo, total, basketball, run, sleep;
    
    cout << "Please enter your wieght: " ;
    cin >> weight;
    
    kilo = weight * 2.2;
    total = 0;
    
    //calculations:
    basketball = (RATE * BASKETBALL * kilo) * 30;
    total += basketball;
    run = (RATE * RUNNING * kilo) * 30;
    total += run;
    sleep = (RATE * SLEEPING * kilo) * 360;
    total += sleep;
    
    //user output:
    cout << "\nCalories Burned per Activity: \n" << endl;
    cout << "Basketball: " << basketball << endl;
    cout << "Running: " << run << endl;
    cout << "Sleeping: " << sleep << endl;
    cout << "===================" << endl;
    cout << "Total: " << total << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
