//Header file for the Inventory class.
#ifndef INVENTORY
#define INVENTORY
#include<string>
using namespace std;

class Inventory
{
    //Instance vars.
    private:
        string itemNum;
        string desc;
        int quant;
        double cost;
    
    //Constructors/Destructors.
    public:
        Inventory();
        Inventory(string, string, int, double);
        ~Inventory();
        
        //Getters and Setters.
        string getItemNum();
        void setItemNum(string);
        
        string getDesc();
        void setDesc(string);
        
        int getQuant();
        void setQuant(int);
        
        double getCost();
        void setCost(double);
        
        //other method
        double calcTotalCost();
};
#endif
