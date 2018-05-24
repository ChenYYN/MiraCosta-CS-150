// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 15 : Project 3
//===============================
/*Program Description:
                    Write a program that reads the contents of Team.txt into an
                    array and the contents of WorldSeriesWinners.txt into a 
                    vector. It should then display the names of each team in the
                    Teams.txt file, each preceded by a number from 1 to 30, and
                    prompt the user to enter the number of one of the teams.
*/
//===============================
/*Algorithm:
            Read in the teams text file into the array.
            Read in the winners text file into the vector.
            loop to ask the user for a valid team selection.
            iterate through the vector and count each occurence of the users
                selection.
            Output the total number of world series wins for the team the user
                selected to the console.
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

const int SIZE = 30;

int main()
{
    //Vars.
    int teamNum, count = 0;
    bool retry;
    string winner;
        
    //File Streams
    ifstream teamFile;              
    ifstream winnerFile;
    
    //array contains all team names.
    string teams[SIZE];              
    vector<string> winners;        
    
    teamFile.open("Teams.txt");  
    if(teamFile)
    {
        //reading all the teams into the array and outputing the list to the console. 
        for (int i = 0; i < SIZE; i++) 
        {
            getline(teamFile, teams[i]); 
            cout << i + 1 << ".) " << teams[i] << endl;
        }
        teamFile.close();               
    }
    else                                        
    {
        cout << "ERROR: File not found...\n";
        system("PAUSE");
        return EXIT_FAILURE;
    }
    
    winnerFile.open("WorldSeriesWinners.txt");
    if(winnerFile)
    {
        //Reading in the text file into the vector.
        while(getline(winnerFile, winner))
        {
            winners.push_back(winner);
        }
        winnerFile.close();                     
    }
    else                                       
    {
        cout << "ERROR: File not found...\n";
        system("PAUSE");
        return EXIT_FAILURE;
    }
    
    //looping for valid input.
    do                          
    {
        //control var.
        retry = false;
        
        //prompt user to enter team number
        cout << "\nSelect a baseball team (1-30): ";
        cin >> teamNum;
        
        if (teamNum < 1 || teamNum > SIZE)
        {
            cout << "ERROR: Invalid command, try again..." << endl;
            retry = true;
        }
        
    } while(retry);
    
    //counts the instances of the the team the user selected in the winners file.
    for (int i = 0; i < winners.size(); i++)
    {
        if(teams[teamNum - 1].compare(winners[i]) == 0)
        {
            count++;
        }
    }
    //final output.
    cout << "\nThe " << teams[teamNum - 1] << " have won the World Series " << count << " time(s)!\n\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
