//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 8 : Lab Part 1
//===============================
/*Program Description:
                      To determine if a number is evenly divisible by 9, 
                      simply add all of the digits in that number.  
                      If the sum is divisible by 9, then the original 
                      number also is divisible by 9.
*/
//===============================
/*Algorithm:
            Prompt the user for a whole number and read the user’s input 
            into a string.
            Calculate the sum of the digits in the number by looping through 
            each character (each digit) in the string, converting it to a 
            number, and adding it to the sum.
            If the sum of the digits is 0, then exit the program
            Otherwise, determine if the sum of the digits in the number is 
            evenly divisible by 9.
            Using that result, print a message to the user indicating whether 
            or not the original number is divisible by 9.
            Go back to step 1.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string num;
    
    while(true)
    {
        int sum = 0;
        
        cout << "\nPlease enter a whole number: ";
        cin >> num;
        
        //finding the sum.
        for(int i = 0; i < num.length(); i++)
        {
            sum += (num[i] - 48);  
            //If you want to see the sum after each iteration. 
            //cout << sum << endl; 
        }
        
        //exit case
        if(sum == 0)
        {
            cout << "\nSum is 0." << endl;
            
            system("PAUSE");
            return EXIT_SUCCESS;
        }
        else if((sum % 9) == 0)
        {
            cout << "\n" << num << " IS divisible by 9!" << endl;
        }
        else
        {
            cout << "\n" << num << " is NOT divisible by 9!" << endl;
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
