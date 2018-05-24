//Program Description: Calculates and displays the distance the car can travel
//                     on one tank of gas when driven in town and on the highway.
//Author: Jack Rollinson W7252829

#include <cstdlib>
#include <iostream>

using namespace std;

const int TANK = 20;
const double TOWN_MPG = 23.5;
const double HIGHWAY_MPG = 28.9;

int main(int argc, char *argv[])
{
    double townTotal = TANK * TOWN_MPG;
    double highwayTotal = TANK * HIGHWAY_MPG;
    
    cout << "Tank Capacity: " << TANK << endl;
    cout << "Town MPG: " << townTotal << endl;
    cout << "Highway MPG: " << highwayTotal << endl; 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
