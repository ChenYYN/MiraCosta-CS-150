#ifndef DATE
#define DATE
#include <string>

using namespace std;

class Date
{
    //Member variables
    private:
        int month, day, year;
        string monthStr;
    //Constructors and destructors
    public:
        Date();
        Date(int month, int day, int year);
        ~Date();
    //Getters and setters
    public:
        void setMonth(int);
        void setDay(int);
        void setYear(int);
        
        int getMonth();
        int getDay();
        int getYear();
        string getMonthStr();
    
    //Other functions
    public:
        void printDateNums();
        void printDateWord1();
        void printDateWord2();
        void monthToString(int month);
        void printAll();
};
#endif
