//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 8 : Lab Part 1
//===============================
/*Program Description:
                      Using the logic behind the algorithm in Part 1, 
                      it’s easy to calculate the first nine multiples of 
                      9 (9x1, 9x2, 9x3…, 9x9).
*/
//===============================
/*Algorithm:
            prompts for and reads an int between 0 and 9 from the user, 
            then calculates and displays that number multiplied by 9.  
            The program then loops back and asks for another number 
            from the user.
            Check for if the user entered 0.
            subtract 1 from the number being multiplied by 9 
            (in this case 3) to get the first digit of the 
            product:  3 – 1 =  2.
            Subtract that digit from 9 to get the second digit:  9 – 2 = 7.
            Put the two digits together to get the answer:  27
            If the user enters the number -1 (the sentinel), 
            then exit the program.
            If the user enters a number between 0 to 9, 
            determine number multiplied by 9 as described above, 
            then go back to the top of the program to prompt 
            for the next number.  
            (The number 0 may require some special processing).
            Otherwise print an error message telling the user that the 
            number is too large or small, then loop back and 
            prompt for the next number.
*/
#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{   
    while(true)
    {
        int first, second;
        stringstream final;
        
        cout << "Please enter a number between (0-9): ";
        cin  >> first;
        
        if(first < 0)
        {
            cout << "\nShutting down..." << endl;
            system("PAUSE");
            return EXIT_SUCCESS;
        }
        else if(first > 9)
        {
            cout << "\nInvalid entry, try again." << endl;
            continue;
        }
        else
        {  
            if(first == 0)
            {
                cout << "The product is: 0" << endl;
                continue;
            }
            
            first--;
            second = 9 - first;
            
            final << first << second; 
            string answer = final.str(); 
            
            cout << "The product is: " << answer << endl;
        }
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
