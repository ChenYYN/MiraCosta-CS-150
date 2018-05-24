// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 13 : Lab 1
//===============================
/*Program Description:
                    Write a program that declares a monthly budget structer with
                    member variables to hold each of these expense categories. The
                    program should create two monthly budget structure variables. 
*/
//===============================
/*Algorithm:
            create two monthly budget structer variables, and prompt the user
            his monthly expenses for each category, output the difference in
            each budget category and the total difference.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

struct MonthlyBudget
{
    double housing, utilities, householdExpenses, transportation, food,
           medical, insurance, entertainment, clothing, misc, spent;
    
    MonthlyBudget();
    ~MonthlyBudget();
};
MonthlyBudget::MonthlyBudget()
{
    housing = 500;
    utilities = 150;
    householdExpenses = 65;
    transportation = 50;
    food = 250;
    medical = 30;
    insurance = 100;
    entertainment = 150;
    clothing = 75;
    misc = 50;
}
MonthlyBudget::~MonthlyBudget() { }

double isValid(double);
double calcTotal(MonthlyBudget);
void print(MonthlyBudget, MonthlyBudget);

int main(int argc, char *argv[])
{
    MonthlyBudget budget;
    MonthlyBudget expenses;
    double balance, total;
    
    cout << "Please enter the amount spent for housing: " << endl;
    cin >> balance;
    expenses.housing = isValid(balance);
    
    cout << "Please enter the amount spent for utilities: " << endl;
    cin >> balance;
    expenses.utilities = isValid(balance);
    
    cout << "Please enter the amount spent for household expenses: " << endl;
    cin >> balance;
    expenses.householdExpenses = isValid(balance);
    
    cout << "Please enter the amount spent for transportation : " << endl;
    cin >> balance;
    expenses.transportation = isValid(balance);
    
    cout << "Please enter the amount spent for food: " << endl;
    cin >> balance;
    expenses.food = isValid(balance);
    
    cout << "Please enter the amount spent for medical: " << endl;
    cin >> balance;
    expenses.medical = isValid(balance);
    
    cout << "Please enter the amount spent for insurance: " << endl;
    cin >> balance;
    expenses.insurance = isValid(balance);
    
    cout << "Please enter the amount spent for entertainment: " << endl;
    cin >> balance;
    expenses.entertainment = isValid(balance);
    
    cout << "Please enter the amount spent for clothing: " << endl;
    cin >> balance;
    expenses.clothing = isValid(balance);
    
    cout << "Please enter the amount spent for misc: " << endl;
    cin >> balance;
    expenses.misc = isValid(balance);
    
    print(budget, expenses);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
double isValid(double num)
{
    if(num > 0 && num < 10000.0)
    {
        return num;
    }
    else
    {
        return 0;
    }
}
double calcTotal(MonthlyBudget object)
{
    return object.housing + object.utilities + object.householdExpenses + object.transportation
           + object.food + object.medical + object.insurance + object.entertainment
           + object.clothing + object.misc;
}
void print(MonthlyBudget object, MonthlyBudget object2)
{
    cout << "\nHousing: " << object.housing << ", Spent: " << object2.housing << ", Difference: " << object.housing - object2.housing
         << "\nUtilities : " << object.utilities << ", Spent: " << object2.utilities << ", Difference: " << object.utilities - object2.utilities
         << "\nHousehold Expenses: " << object.householdExpenses << ", Spent: " << object2.householdExpenses << ", Difference: " << object.householdExpenses - object2.householdExpenses
         << "\nTransportation: " << object.transportation << ", Spent: " << object2.transportation << ", Difference: " << object.transportation - object2.transportation
         << "\nFood: " << object.food << ", Spent: " << object2.food << ", Difference: " << object.food - object2.food
         << "\nMedical: " << object.medical << ", Spent: " << object2.medical << ", Difference: " << object.medical -  object2.medical
         << "\nInsurance: " << object.insurance << ", Spent: " << object2.insurance << ", Difference: " << object.insurance - object2.insurance
         << "\nEntertainment: " << object.entertainment << ", Spent: " << object2.entertainment << ", Difference: " << object.entertainment - object2.entertainment
         << "\nClothing: " << object.clothing << ", Spent: " << object2.clothing << ", Difference: " << object.clothing - object2.clothing
         << "\nMiscellaneous: " << object.misc << ", Spent: " << object2.misc << ", Difference: " << object.misc - object2.misc
         << "\n\nTotal: " << calcTotal(object) - calcTotal(object2) << endl;
}
