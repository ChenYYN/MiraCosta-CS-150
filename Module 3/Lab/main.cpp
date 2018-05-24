//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 3 : Project 1
//===============================
//Program Description: performs the operations outlined in the lab for module 3.
//===============================
/*Algorithm:
            Read a two digit number in as a string.
            store each char of the string array in a seperate variable. 
            convert the char to its TRUE int value. 
            perform operations outlined in the lab instructions.
            output the results for the user. 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{ 
    char firstChar, secondChar;
    int firstDigit, secondDigit, newNum;
    int zeroChar = '0';
    string userInput; 
    
    cout << "The value of zeroChar is: " << zeroChar << endl;
    cout << "\nEnter a 2 digit number, if less than 10, enter as 03: ";
    cin >> userInput;
    
    firstChar = userInput[0];
    secondChar = userInput[1];
    firstDigit = firstChar - zeroChar;
    secondDigit = secondChar - zeroChar;
    
    cout << "\nThe two didgits are: " << firstDigit << " & " << secondDigit << endl;
    cout << "The sum of the two digits is: " << (firstDigit + secondDigit) << endl;
    cout << "The product of the two digits is: " << (firstDigit * secondDigit) << endl;
    firstDigit += 1;
    newNum = (firstDigit * 10) + secondDigit;
    cout << "Your new magic number is: " << newNum << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
