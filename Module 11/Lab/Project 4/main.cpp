//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 11 : Lab 4
//===============================
/*Program Description:
                      Write a function that when invoked, it will print the
                      String passed into the variable word a total of how_many
                      times.
*/
//===============================
/*Algorithm:
            If the number number of times to repeat is more than 1,
            separate each occurence with a space.
            Else loop and output the string the desired number of times,
            appending spaces inbetween each iteration.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

void repeat(string word = "*", int how_many = 5);

int main(int argc, char *argv[])
{
    repeat();
    repeat("$");
    repeat("Rah", 3);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void repeat(string word, int how_many)
{
    if(how_many == 1)
    {
        cout << word << endl;
    }
    else
    {
        cout << word;
        
        for(int i = 1; i < how_many; i++)
        {
            cout << " " << word;
        }
        cout << endl;
    }
}
