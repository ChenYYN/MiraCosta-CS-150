//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 11 : Lab 2
//===============================
/*Program Description:
                      Write a program that computes and displays the charges for
                      a patient's hospital stay. First, the program should ask
                      if the patient was admitted as an inpatient or an out.
*/
//===============================
/*Algorithm:
            Ask user if the patient is an in or out patient.
            Take in nessisary information for the patient.
            find the total cost.
            loop to see if entry is invalid for a variable.
            output total for the patient to the console. 
*/

#include<iostream>
#include<iomanip>

using namespace std;

bool validate(double charge) ;
double total(double meds, double dayPay, double tests) ;
double total(double meds, double tests) ;

int main()
{
    int daysStayed ;
    double dayRate, dayTotal, medCharge, testCharge, totalCharge ;
    string patient ;
    bool valid = false ;
    
    cout << "Was this an in or out patient?  " ;
    cin >> patient ;
    
    if((patient == "out")||(patient == "o")||(patient == "Out")||(patient == "O"))
    {
        while(valid == false)
        {
            cout << "What is the medication charge?  " ;
            cin >> medCharge ;
            valid = validate(medCharge);
            if(valid==false)
            {
                cout << "Please re-enter." << endl;
            }
        }
        valid = false ;
        while(valid == false)
        {
            cout << "What is the test charge?  ";
            cin >> testCharge ;
            valid = validate(testCharge) ;
            if(valid==false)
            {
                cout << "Please re-enter." << endl;
            }
        }
        totalCharge = total(medCharge, testCharge) ;
    }
    else if((patient == "in")||(patient == "i")||(patient == "In")||(patient == "I"))
    {
        while(valid == false)
        {
            cout << "How many days did they stay?  " ;
            cin >> daysStayed ;
            cout << "What is the rate per day?  ";
            cin >> dayRate ;
            dayTotal = dayRate * daysStayed ;
            valid = validate(dayTotal) ;
            if(valid==false)
            {
                cout << "Please reenter." << endl;
            }
        }
        valid = false ;
        while(valid == false)
        {
            cout << "What is the medication charge?  " ;
            cin >> medCharge ;
            valid = validate(medCharge);
            if(valid==false)
            {
                cout << "Please reenter." << endl;
            }
        }
        valid = false ;
        while(valid == false)
        {
            cout << "What is the test charge?  ";
            cin >> testCharge ;
            valid = validate(testCharge) ;
            if(valid==false)
            {
                cout << "Please reenter." << endl;
            }
        }
        totalCharge = total(medCharge,dayTotal,testCharge);
    }
    
    //tell user
    cout << setprecision(2) << fixed;
    cout << "The total for this patient is $" << totalCharge << "." << endl;
    
    system("pause");
    return 0;   
}

bool validate(double charge)
{
    if((charge > 10000)||(charge < 0))
    {
        return false;
    }
    else
    {
        return true;
    }
}
double total(double meds,double dayPay,double tests)
{
    double amount = meds + dayPay + tests ;
    return amount ;
}
double total(double meds, double tests)
{
    double amount = meds +  tests ;
    return amount ;
}
