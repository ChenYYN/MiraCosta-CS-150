//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 6 : Project 2
//===============================
//Program Description: Calculates the number of calories burned for various
//                     activities, based on ones lifestyle. 
//===============================
/*Algorithm:
            prompt the user for lifestlye selection
            adjust calories burned based on the lifestyle. 
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
const double RATE = 0.0715;

int main(int argc, char *argv[])
{
    //variables:
    int weight, life;
    double kilo, total, basketball, run, sleep;
    
    cout << "1 - Sedentary (what is working out?)" 
         << "\n2 - Somewhat Active (exercises ocasionally)"
 	 	 << "\n3 - Active (exercises 3-4 times a week)"
 	 	 << "\n4 - Highly Active (exercises every day)"
 	 	 << "\n\nPlease choose one of the above life styles: ";
    cin >> life;
		 
    cout << "Please enter your wieght in pounds: " ;
    cin >> weight;
    
    kilo = weight / 2.2;
    total = 0;
    
    //calculations:
    basketball = (RATE * BASKETBALL * kilo) * 30;
    total += basketball;
    run = (RATE * RUNNING * kilo) * 30;
    total += run;
    sleep = (RATE * SLEEPING * kilo) * 360;
    total += sleep;
    
    if(life == 1)
    {
        total -= (total * 0.2);
    }       
    else if(life == 2)
    {
        //do nothing
    }
    else if(life == 3)
    {
        total += (total * 0.2);
    }
    else if(life == 4)
    {
        total += (total * 0.5);
    }
    else
    {
        cout << "\nERROR: Invalid menu selection..." << endl;
    }
    	
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
