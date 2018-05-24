// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 13 : Lab 1
//===============================
/*Program Description:
                    Tester program for Date header file and, and the Date.cpp
                    program. Tests all the functions in the class via the printAll
                    function.
*/
//===============================
/*Algorithm:
            Create several Date objects and output their contents to the console.
            Tests all the functions in the Date.h header file via the printAll()
            function.
*/
#include <cstdlib>
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

int main(int argc, char *argv[])
{
    Date test1;
    test1.printAll();
    
    Date test2(2, 15, 2005);
    test2.setDay(20);
    test2.setYear(2099);
    test2.printAll();
    
    Date test3(2, 30, 3000);
    test3.printAll();
    
    Date test4(12, 25, 2018);
    test4.printAll();

    system("PAUSE");
    return EXIT_SUCCESS;
}

