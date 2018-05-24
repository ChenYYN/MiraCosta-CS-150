// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 12 : Project 1
//===============================
/*Program Description:
                      Create a GasTank class with two member variables, a 
                      constructor, a destructor, getters, setters, and a 
                      function to display the information about the level of 
                      gas in the tank. 
*/
//===============================
/*Algorithm:
            Create a class names GasTank, It should contain all the listed
            variables and functions outline in the module 12 assignemnet.
            Setters need to check for valid input.
            Create 6 gastank objects with the given parameters.
            Call the showInfo() function on each GasTank object.
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

class GasTank
{
    public:
        static const double DEFAULT_CAPACITY = 30.0;
        static const double MINIMUM_CAPACITY = 4.0;
        
    private:
        double capacity, level;
        
    public:
        GasTank(double, double);
        ~GasTank();
        double getLevel();
        double getCapacity();
        void setLevel(double);
        void setCapacity(double);
        double calcFill();
        void showInfo();
};
GasTank :: GasTank(double lev = 0.0, double cap = DEFAULT_CAPACITY)
{
    setCapacity(cap);
    setLevel(lev);
}
GasTank :: ~GasTank(){}
double GasTank :: getLevel()
{
    return level;   
}
double GasTank :: getCapacity()
{
    return capacity;
}
void GasTank :: setLevel(double lev)
{
    if(lev < 0)
    {
        level = 0;
    }
    else if(lev > capacity)
    {
        level = capacity;
    }
    else
    {
        level = lev;
    }
}
void GasTank :: setCapacity(double cap)
{
    if(cap < MINIMUM_CAPACITY)
    {
        capacity = MINIMUM_CAPACITY;
    }
    else
    {
        capacity = cap;
    }
}
double GasTank :: calcFill()
{
    return getLevel() / getCapacity();   
}
void GasTank :: showInfo()
{
    cout << "\nLevel: " << setprecision(1) << fixed << level
         << "\nCapacity: " << setprecision(1) << fixed << capacity
         << "\nCalc Fill: " << setprecision(2) << fixed << calcFill() << endl;
}

int main(int argc, char *argv[])
{
    GasTank tank1, tank2(12.5), tank3(0, 50), tank4(18.6, 35.2), tank5(-1, -5), tank6(40, 30);
    
    tank1.showInfo();
    tank2.showInfo();
    tank3.showInfo();
    tank4.showInfo();
    tank5.showInfo();
    tank6.showInfo();

    system("PAUSE");
    return EXIT_SUCCESS;
}
