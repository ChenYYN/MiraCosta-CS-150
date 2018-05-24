// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 15 : Project 1
//===============================
/*Program Description:
                    Create a program that formats and calculates the averages
                    for a data set of temperatures for various cities.
*/
//===============================
/*Algorithm:
            Create a 4x12 array of ints representing the average temperature by
            month for 4 major U.S. cities.
            Populate the array with an initialization list.
            Develop a function to print a report showing the detail of the 
            temperature array, as described on canvas.
            call the function to output to the console. 
*/
#include <iomanip>
#include <iostream>
using namespace std;

//Prints a formatted report of the average temperatures for the given array.
void printReport(int array[][12], int size)
{
    //Table Header.
    cout << "\n    City      Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec Year\n";
    cout << "------------------------------------------------------------------\n";
    
    //Table Body.
    for(int i = 0; i < size; i++)
    {
        if(i == 0)
        {
            cout << left << setw(15) << "Los Angeles:";
        }
        else if(i == 1)
        {
            cout << left << setw(15) << "New York:";
        }
        else if(i == 2)
        {
            cout << left << setw(15) << "Miami:";
        }
        else
        {
            cout << left << setw(15) << "Seattle:";
        }
        
        int total = 0, average;  
        
        //calculate yearly averages.      
        for(int j = 0; j < 12; j++)       
        {
            cout << array[i][j] << "  ";
            total += array[i][j];           
        }
        
        average = total / 12.0;              
        cout << " " << average << endl;     
    }
    
    //Table footer.
    cout << "------------------------------------------------------------------\n";
    cout << "Monthly Avg:   ";  
    
    //calculate monthly averages.         
    for(int i = 0; i < 12; i++)             
    {
        int total = 0, average;
        
        for(int j = 0; j < size; j++)
        {
            total += array[j][i];
        }
                
        average = total / 4.0;                
        cout << average << "  ";            
    }
    cout << "\n\n";
}
int main()
{
    //Contains the same data as shown on canvas.
    int temp[4][12] = {{68, 69, 70, 73, 75, 79, 83, 84, 83, 79, 73, 68},
                       {39, 42, 50, 62, 72, 80, 85, 84, 76, 65, 54, 44},
                       {73, 74, 75, 78, 81, 84, 85, 86, 85, 82, 78, 76},
                       {47, 51, 55, 59, 65, 70, 75, 75, 69, 60, 51, 46}};
                       
    printReport(temp, 4);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
