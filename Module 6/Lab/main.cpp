//Author: Jack Rollinson W7252829
// CS150 Spring 2018
// Module 6 : Lab 1
//===============================
/*Program Description:
                      present the user with menus of options 
                      to purchase tickets for a train trip, 
                      determine how many tickets he/she wants 
                      to purchase, and present a total cost to 
                      the user.
*/
//===============================
/*Algorithm:
            Initialize constants and variables
            Determine the destination
            Determine the fare type
            Determine the number of tickets to purchase
            calculate total and output results
*/
#include <cstdlib>
#include <iostream>

using namespace std;

const string DEST_LA = "Los Angeles",
             DEST_SM = "Santa Maria",
             DEST_SF = "San Francisco";
             
const string FARE_TYPE_CHILD = "Child",
             FARE_TYPE_ADULT = "Adult",
             FARE_TYPE_SENIOR = "Senior";
             
int main(int argc, char *argv[])
{
    //vars
    string destination, ticketType;
    int city_number, ticket_number, ticket_amount;
    double child_fare = 0.0,
           adult_fare = 0.0,   
           senior_fare = 0.0,
           chosenFare = 0.0,
           total;
    
    //input
    cout << "**** Choose a Destination ****\n"
         << "\n1 - " << DEST_LA
         << "\n2 - " << DEST_SM
         << "\n3 - " << DEST_SF
         << "\n\nPlease enter your destination (1-3): ";
    cin >> city_number;
    
      if (city_number == 1)
      {
         destination = DEST_LA ;
         child_fare = 25 ;
         adult_fare = 41 ;
         senior_fare = 28 ;
      }
      else if (city_number == 2)
      {
         destination = DEST_SM ;
         child_fare = 36 ;
         adult_fare = 58 ;
         senior_fare = 42 ;
      }
      else if (city_number == 3)
      {
         destination = DEST_SF ;
         child_fare = 45 ;
         adult_fare = 73 ;
         senior_fare = 51 ;
      }
      else
      {
         cout << "That is not a valid destination, please retry." << endl ;  
         system("pause") ;
         exit(1) ;  
      }
    
    cout << "\n**** Fares to " << destination << " ****\n"
         << "\n1 - " << FARE_TYPE_CHILD << " $" << child_fare
         << "\n2 - " << FARE_TYPE_ADULT << " $" << adult_fare
         << "\n3 - " << FARE_TYPE_SENIOR << " $" << senior_fare
         << "\n\nPlease enter your ticket type (1-3): ";
    cin >> ticket_number;
    
      if (ticket_number == 1)
      {
         ticketType = FARE_TYPE_CHILD ;
         chosenFare = child_fare;
      }
      else if (ticket_number == 2)
      {
         ticketType = FARE_TYPE_ADULT ;
         chosenFare = adult_fare;
      }
      else if (ticket_number == 3)
      {
         ticketType = FARE_TYPE_SENIOR ;
         chosenFare = senior_fare;
      }
      else
      {
         cout << "That is not a valid fare, please retry." << endl ;  
         system("pause") ;
         exit(1) ;  
      }
    
    cout << "\nHow many tickets would you like to buy? '0' to exit. (1-10): ";
    cin >> ticket_amount;
    
    if(ticket_amount < 0 || ticket_amount > 10)
    {
        cout << "That is an invalid number of tickets, please retry." << endl ;
        system("pause") ;
        exit(3) ;
    }
    else if(ticket_amount == 0)
    {
        system("PAUSE");
        exit(0);
    }
    else
    {
        //calculations
        total = chosenFare * ticket_amount;
        
        //final output
        cout << "\nThe total for " 
             << ticket_amount << " "
             << ticketType
             << " tickets to " 
             << destination << " is $"
             << total << "\n" << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
