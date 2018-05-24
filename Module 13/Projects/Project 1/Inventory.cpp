// Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 13 : Project 1
//===============================
/*Program Description:
                     Design an inventory class that can hold information for an
                     item in a retail store's inventory. The class should have
                     the following private member variables.
*/
//===============================
/*Algorithm:
            Define the inventory class and create 4 Inventory objects, filled with
            the same data from the homework example. 
            Use the getters to print the first colums of each line of the report
            and the calcTotalCost() function to retrieve the last column of each
            line of the report. 
*/
#include "Inventory.h"
#include <iostream>
#include <iomanip>

//Constructors/Destructors.
Inventory::Inventory() 
{
    setItemNum(" ");
    setDesc(" ");
    setQuant(0);
    setCost(0);
}
Inventory::Inventory(string code, string item_type, int how_many, double price)
{                                   
    setItemNum(code);
    setDesc(item_type);
    setQuant(how_many);
    setCost(price);
}
Inventory::~Inventory() { }

//Setters and Getters.
string Inventory::getItemNum()
{
    return itemNum;
}
void Inventory::setItemNum(string newNum)
{
    itemNum = newNum;
}
string Inventory::getDesc()
{
    return desc;
}
void Inventory::setDesc(string itemType)
{
    desc = itemType;
}
int Inventory::getQuant()
{
    return quant;
}
void Inventory::setQuant(int num)
{
    quant = num;
}
double Inventory::getCost()
{
    return cost;
}
void Inventory::setCost(double num)
{
    cost = num;
}

//Helper Functions
double Inventory::calcTotalCost()
{
    return getQuant() * getCost();
}

void print(Inventory);
int main()
{
    //Test objects.
    Inventory test1("H19403", "Ball Peen Hammer", 85, 25.91);
    Inventory test2("BX94032", "Box of 2-1/2\" Nails", 1205, 9.24);
    Inventory test3;
    test3.setItemNum("SD92403");
    test3.setDesc("Phillips Screwdriver");
    test3.setQuant(58);
    test3.setCost(14.71);
    Inventory test4;
    test4.setItemNum("WB823");
    test4.setDesc("Wheelbarrow");
    test4.setQuant(7);
    test4.setCost(214.55);
    
    //Table header.
    cout << "Item-No.      Description      Quantity  Unit-Cost   Total-Cost";
    cout << "\n--------  -------------------  --------  ---------  -----------";
    
    print(test1);
    print(test2);
    print(test3);
    print(test4);
    
    //calculate total cost of all inventory items
    double totalInventCost = test1.calcTotalCost() + test2.calcTotalCost() 
                    + test3.calcTotalCost() + test4.calcTotalCost();
                    
    cout << endl << setw(63) << "==========" << endl;
    cout << setw(49) << "TOTAL" << setw(14) << totalInventCost << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void print(Inventory object)
{
     cout << endl << setw(10) << left << object.getItemNum() << setw(21) 
        << object.getDesc() << right << setw(8) << object.getQuant() 
        << setw(11) << object.getCost() << setw(13) << object.calcTotalCost();
}
