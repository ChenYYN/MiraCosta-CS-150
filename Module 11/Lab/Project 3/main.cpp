//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 11 : Lab 3
//===============================
/*Program Description:
                      Write a program that calculates the average of a group of
                      test scores, where the lowest score in the group is
                      dropped.
*/
//===============================
/*Algorithm:
            Collect test scores fromt he user. 
            Find the lowest score in the group.
            Average the test scores, ignoreing the lowest test score. 
            Output to the user the GPA for the course and which test was dropped. 
*/

#include<iostream>
#include<iomanip>

using namespace std ;

//I know I was supposed to used refferenced parameters, but the directions were
//not clear how you wanted them to be used with the getScore() func.
int getScore(int t1, int t2, int t3, int t4, int t5, int low);
double average(int totalScore);
int findLowest(int t1, int t2, int t3, int t4, int t5);

int main()
{
    //set variables for tests
    int test1, test2, test3, test4, test5, total, lowest;
    double averageScore ;
    
    //ask user for test scores
    cout << "Please enter the 5 test, pressing enter betweeen each one." << endl;
    cin >> test1 ;
    cin >> test2 ;
    cin >> test3 ;
    cin >> test4 ;
    cin >> test5 ;
    
    //test for lowest
    lowest = findLowest(test1, test2, test3, test4, test5) ;
    
    //finding score
    total = getScore(test1, test2, test3, test4, test5, lowest) ;
    
    //finding the average score
    averageScore = average(total);
    
    //tell user
    cout << "The average test score is: " << averageScore << "%; With the test score of: " << lowest << " dropped." << endl;
    
    system("pause");
    return 0;
}
int getScore(int t1, int t2, int t3, int t4, int t5, int low)
{
    return t1 + t2 + t3 + t4 + t5 - low ;

}
double average(int totalScore)
{
    return totalScore / 4.0 ;
}
int findLowest(int t1, int t2, int t3, int t4, int t5)
{
    int low = 100 ;
    
    if(low > t1)
    {
        low = t1;
    }
    if(low > t2)
    {
        low = t2;
    }
    if(low > t3)
    {
        low = t3;
    }
    if(low > t4)
    {
        low = t4;
    }
    if(low > t5)
    {
        low = t5;
    }
    return low;
}
    
