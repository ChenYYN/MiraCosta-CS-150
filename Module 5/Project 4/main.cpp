// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 5 : Project 3
//===============================
/*Program Description: a program that can be used as an arithmetic tutor 
                         for a young student.
*/
//===============================
/*Algorithm: display two random numbers between 1 and 99 which the young 
             student must add.
             prompt the young student for an answer.
             After the student has entered an answer and pressed the 
             [Enter] key, the program should display the correct answer so 
             the student can see if his or her answer is correct .
*/            
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

const int MAX = 99;

int main(int argc, char *argv[])
{
    unsigned seed = time(0);
    srand(seed);
    
    int answer, input;
    int num1 = (rand() % MAX) + 1;
    int num2 = (rand() % MAX) + 1;
    answer = num1 + num2;
    
    cout << "Add these two numbers: \n"
         << "\n" << setw(4) << right << num1
         << "\n +" << setw(2) << right << num2
         << "\n----\n " << setw(4) << right;
    cin >> input;
    
    cout << "\nThe answer was: " << answer << "\n" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
