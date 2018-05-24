// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 15 : Lab 1
//===============================
/*Program Description:
                    Define a structer for a student, and then create a vector of
                    students to print a nicely formated report of its in content
                    in a tabular form.
*/
//===============================
/*Algorithm:
            Define the student structer
            Add the requested information to a vector of students.
            loop to pring the contents on the vector in a nicely formatted table.
*/
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Student
{
    string name;
    string major;
    double gpa;
    int years;
};
int main()
{
    vector<Student> roster; 
    
    //Given data from assignment:
    Student isaac;
    isaac.name = "Isaac Newton";
    isaac.major = "Physics";
    isaac.gpa = 4.0;
    isaac.years = 1;
    
    Student fluffy;
    fluffy.name = "Fluffy";
    fluffy.major = "Comedy/Drama";
    fluffy.gpa = 3.2;
    fluffy.years = 2;
    
    Student monty;
    monty.name = "Monty Python";
    monty.major = "French";
    monty.gpa = 0.5;
    monty.years = 1;
    
    Student babe;
    babe.name = "Babe Ruth";
    babe.major = "Athletics";
    babe.gpa = 3.5;
    babe.years = 2;
    
    //add current student objects to the vector.
    roster.push_back(isaac);
    roster.push_back(fluffy);
    roster.push_back(monty);
    roster.push_back(babe);
    
    //remove babe ruth from the class roster.
    roster.pop_back();
    
    //replace babe with a new student object.
    Student rene;
    rene.name = "Rene Decartes";
    rene.major = "Philosophy/Logic";
    rene.gpa = 3.3;
    rene.years = 1;
    roster.push_back(rene);
    
    //insert a new student object between fluffy and monty
    Student abraham;
    abraham.name = "Abraham Lincoln";
    abraham.major = "Political Science";
    abraham.gpa = 3.8;
    abraham.years = 3;
    roster.insert(roster.begin() + 2, abraham);
    
    //Table header
    cout << "\n     Name             Major       GPA  Year" << endl;
    cout << "**************  ****************  ***  ****" << endl;
    //Printing student info
    for (int i = 0; i < roster.size(); i++)
    {
        cout << left << setw(16) << roster[i].name << setw(18) 
             << roster[i].major << setw(3) << fixed << showpoint << setprecision(1)
             << roster[i].gpa << "   " << roster[i].years << endl;
    }
    cout << "\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
