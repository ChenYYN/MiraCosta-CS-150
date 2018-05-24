//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 11 : Lab 1
//===============================
/*Program Description:
                      Write a boolean function names isPrime, which takes an int
                      as an argument and returns true if the argument is prime,
                      false otherwise. 
*/
//===============================
/*Algorithm:
            Check if number is even, if it is return false
            If it is odd, loop to devide the number by every number counting up
            to it, if any of the iterations return zero then the number is prime.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

bool isPrime(int num);
int main(int argc, char *argv[])
{
    int input;
    while(true)
    {
        cout << "Enter a number to see if it is prime (0 to stop): ";
        cin >> input;
        
        if(input == 0)
        {
            break;
        }
        if(isPrime(input))
        {
            cout << input << " is prime!" << endl;
        }
        else
        {
            cout << input << " is not prime!" << endl;
        }
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
bool isPrime(int num)
{
    //check if n is a multiple of 2
    if (num % 2 == 0)
    {
        return false;
    }
    //if not, then just check the odds
    for(int i = 3; i * i <= num; i += 2) 
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;   
}
