// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 5 : Lab 1
//===============================
//Program Description: Manipulates a string given from the user. 
//===============================
/*Algorithm:
             Create three string variables
             Prompt the user to enter a sentence with the word "hate" 
             in it and assign the sentence to the variable original_string.
             Find the starting index of the word "hate" in the string 
             referenced by original_string.
             Print a message on the console identifying where the 
             word "hate" starts in the original string.
             replace "hate" with "love" in the string referenced by 
             the original_string variable.
             Print the new value in the original_string variable. 
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    string original_string = "";
    string hate = "hate";
    string love = "love";
    
    cout << "Please enter a sentence containing the word 'hate': \n";
    getline(cin, original_string);
    
    int start = original_string.find(hate) ;
    int length = hate.length() ;
    
    cout << "\nThe sentence you entered was: \n" 
         << "\"" << original_string << "\""
         << "\n\nThe word 'hate' starts at the " << start << " index."
         << "\n" << endl;
    
    original_string.replace(start, length, love) ;
         
    cout << "\nThe new sentence is: \n" 
         << "\"" << original_string << "\""
         << "\n" << endl;
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
