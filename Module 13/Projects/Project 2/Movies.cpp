// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 13 : Project 2
//===============================
/*Program Description:
                      Write a program that uses a structure named movie data to
                      store the listed inmormation about a movie. Create a list
                      of three movie data variables describing different movies
                      and pass each one in turn to a function that displays the
                      information about the movie in a clearly formatted manner.
                      Pass the movie data variables to the display function by
                      constant reference.  
*/
//===============================
/*Algorithm:
            Create 3 movie objects using a struct, and output their contents 
            in a nicely formatted table using a function. 
*/
#include <iomanip>
#include <iostream>

using namespace std;

//Structures.
struct RunningTime
{
    //instance vars.
    short hours, minutes;
};

struct MovieData
{
    //instance vars.
    string title, director;
    int year;
    RunningTime runTime;
    double productionCosts, revenues;
    
    //Constructor.
    MovieData(string aTitle, string aDirector, int aYear, short hour, 
              short minute, double costs, double revenue)
    {
        title = aTitle;
        director = aDirector;
        year = aYear;
        runTime.hours = hour;
        runTime.minutes = minute;
        productionCosts = costs;
        revenues = revenue;
    }
};


void print(const MovieData&);

int main(int argc, char *argv[])
{
    //Objects.
    MovieData movie1("Baby Driver", "E. Wright", 
                                            2005, 2, 30, 5, 316915264);
    MovieData movie2("The Dark Knight", "C. Nolan", 
                                            2016, 2, 40, 10, 21234762);
    MovieData movie3("Intersteller", "C. Nolan", 
                                            2009, 2, 50, 120, 95494838);
    
    //Table output.
    cout << "       Title            Director   Year       Length     Cost    Revenues\n";
    cout << "-------------------  ------------  ----  ------------  --------  ----------\n";
    
    print(movie1);
    print(movie2);
    print(movie3);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void print(const MovieData &item)
{
    cout << setw(21) << left << item.title << setw(14) << item.director 
        << setw(4) << right << item.year << "  " << item.runTime.hours 
        << " hrs " << item.runTime.minutes << " min" << "  $" << setw(3) 
        << item.productionCosts << " mil" << "  $" << setprecision(9) 
        << item.revenues << endl;
}
