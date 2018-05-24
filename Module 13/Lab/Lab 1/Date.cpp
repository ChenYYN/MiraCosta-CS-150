/* Defines all the functions outlined in the Date.h file */
#include <cstdlib>
#include <iostream>
#include <string>
#include "Date.h" //notice the quotes.

using namespace std;

//Getters
int Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}
int Date::getYear()
{
    return year;
}
string Date::getMonthStr()
{
    return monthStr;
}
//Setters
void Date::setMonth(int newMonth)
{
    if(newMonth >= 1 && newMonth <= 12)
    {
        month = newMonth;
    }
    else
    {
        cout << "Invalid entry..." << endl;
    }
}
void Date::setDay(int newDay)
{
    if(month == 2)
    {
        if(newDay >=1 && newDay <= 29)
        {
            day = newDay;
        }
        else
        {
            cout << "Invalid entry..." << endl;
        }
    }
    else if(newDay >= 1 && newDay <= 31)
    {
        day = newDay;
    }
    else
    {
        cout << "Invalid entry..." << endl;
    }
}
void Date::setYear(int newYear)
{
    if(newYear >= 1900 && newYear <= 2099)
    {
        year = newYear;
    }
    else
    {
        cout << "Invalid entry..." << endl;
    }
}
//Constructors/Destructors
Date::Date()
{
    setMonth(1);
    setDay(1);
    setYear(2000);
    monthToString(getMonth());
}
Date::Date(int newMonth, int newDay, int newYear)
{
    setMonth(newMonth);
    setDay(newDay);
    setYear(newYear);
    monthToString(getMonth());
}
Date::~Date() { }
//Other functions
void Date:: monthToString(int newMonth)
{
    switch(newMonth)
    {
        case 1 : monthStr = "January";
        case 2 : monthStr = "February";
        case 3 : monthStr = "March";
        case 4 : monthStr = "April";
        case 5 : monthStr = "May";
        case 6 : monthStr = "June";
        case 7 : monthStr = "July";
        case 8 : monthStr = "August";
        case 9 : monthStr = "September";
        case 10 : monthStr = "October";
        case 11 : monthStr = "November";
        case 12 : monthStr = "December";
    }
}  
void Date::printDateNums()
{
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
void Date::printDateWord1()
{
    cout << getMonthStr() << " " << getDay() << ", " << getYear() << endl;
}
void Date::printDateWord2()
{
    cout << getMonthStr() << " " << getDay() << " " << getYear() << endl; 
}
void Date::printAll()
{
    printDateNums();
    printDateWord1();
    printDateWord2();
    cout << "" << endl;
}

