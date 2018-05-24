// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 15 : Project 2
//===============================
/*Program Description:
                    Create a TestGrader class, the class will have an answers
                    array of 20 chars which will hold the test key. Should also
                    include 2 public member functions setKey() and grade().
                    An applicant must correctly answer 15 or more of the 20
                    questions to pass the exam.
*/
//===============================
/*Algorithm:
            create the answer key array from the string using a function call.
            loop for valid input from the user and read each test answer into
            an array.
            grade the test using a function call.
                show the final output to the user in the function call.
            prompt the user to see if they want to take another test. 
             if yes, start at the top.
             else no, end program.
*/
#include <iostream>
#include <string>
using namespace std;

//Prototypes
string tostring(int);

class TestGrader
{
    private:
        char answers[20];
        
    public:
        void setKey(string);
        void getGrade(char array[]);
};

//Reads a new answer key string into an array.
void TestGrader::setKey(string key)
{
    for(int i = 0; i < 20; i++)
    {
        answers[i] = key.at(i);
    }
}

//Grades the given test array, and outputs the results to the console.
void TestGrader::getGrade(char test[20])
{
    int right = 0;
    string wrong = "";
    
    //grading the test 
    for(int i = 0; i < 20; i++)
    {
        if(answers[i] == test[i])
        {
            right++;     
        }                
        else                                
        {
            wrong += tostring(i + 1) + ", ";
        }
    }
    
    //pass or fail retry.
    if(right >= 15)
    {                      
        cout << "\nYou passed!\n\n";
    }
    else 
    {                                  
        cout << "\nYou did not pass.\n\n";
    }
    
    //output final report.
    cout << "You answered " << right << " questions correctly, and " 
         << 20 - right << " incorrectly.\n";
    cout << "\nHere is a list of questions you answered incorrectly:\n" 
         << wrong;
}

//Main function loops for user input, grades the test and outputs the results.
int main()
{
    //Vars.
    string key = "BDAACABACDBCDADCCBDA";
    char test[20];
    TestGrader examiner;
    char answer, retry;
    bool goAgain = true;
    
    examiner.setKey(key);
    
    //User input/ test grading/ final output.             
    do
    {
        cout << "Enter your exam answers (1-20):\n";
        
        for(int i = 0; i < 20; i++)
        {
            
            bool invalid = false;
            
            do                    
            {
                cout << i + 1 << ".) ";
                cin >> answer;
                answer = toupper(answer);
                
                if(answer == 'A' || answer == 'B' || 
                   answer == 'C' || answer == 'D')
                {
                    test[i] = answer;
                    invalid = false;
                }
                else 
                {
                    cout << "ERROR: Invalid entry, try again..." << endl;
                    invalid = true;
                }
            } while(invalid);
        }

        examiner.getGrade(test);
        
        cout << "\n\nTry again? (y/n): ";
        cin >> retry;
        retry = toupper(retry);

        if(retry == 'N')
        {
            goAgain = false;
            cout << "\n";
        }
        
    } while(goAgain);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

//Converts the given integer to a string. (defined on canvas)
string tostring(int number)
{
    // holds number as a string
    string str = "" ;  
     
    do
    {   // Peel off last digit and add to the string
        str = (char)(number % 10 + '0') + str ;
        number /= 10 ;
    } while (number != 0) ;
    
    return str ;
}
