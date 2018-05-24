//Program Discription: Defines variables of various data types, and shows their
//                             output.
//Author: Jack Rollinson W7252829

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int largest = 2147483647;
    cout << "Largest int value: " << largest << endl; 
    
    largest += 1;
    cout << "Largest int + 1: " << largest << endl;
    cout << "Memory size in bytes: " << sizeof(largest) << endl;
    
    unsigned long long smallest = 0;
    cout << "\n\nSmallest unsigned long long value: " << smallest << endl;
    
    smallest -= 1;
    cout << "Smallest long long - 1: " << smallest << endl;
    cout << "Memory size in bytes: " << sizeof(smallest) << endl;
    
    double close = 1.7e308;
    cout << "\n\nAlmost largest double value: " << close << endl;
    cout << "Memory size in bytes: " << sizeof(close) << endl;
    
    close = close * 2;
    cout << "\nAlmost largest double value * 2: " << close << endl;
    cout << "Memory size in bytes: " << sizeof(close) << endl;
    
    double divZero = 1.7e308 / 0;
    cout << "\n\nThis is what you get when you divide by zero: " << (divZero) << endl;
    
    int truncate = 9.999999;
    cout << "\n\nThis is a truncated int: " << (truncate) << endl;
    
    int num1 = 5;
    char num2 = '5';
    string num3 = "5";
    
    cout << "\n\nThe output of 5 is: " << num1 << endl; 
    cout << "The output of '5' is: " << num2 << endl;
    cout << "The output of \"5\" is: " << num3 << endl;
    
    cout << "The output of 5 + 1 is: " << num1 + 1 << endl; 
    cout << "The output of '5' + 1 is: " << num2 + 1 << endl;
    
    //If you use the variable num3 instead of the string literal it crashes. 
    cout << "The output of \"5\" + 1 is: " << "5" + 1 << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
