/*
@author: Brandon Muggli
@date: 09/08/26
@purpose: this program is the starting point for exporting data to microsoft excell
*/

#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    //create a file object
    fstream Fuel;

    //create variables to store data
    string equipment;
    float quantity = 0.00;

    //ask the user for the name of the equipment and the quantity of fuel used to fill the tank
    cout<<"What equipment are you fueling:" "\n";
    cin>>equipment;
    cout<<"What is the quantity of fuel in gallons:" "\n";
    cin>>quantity;

    //get the current time from the system
    auto now = chrono::system_clock::now();
    time_t currentTime = std::chrono::system_clock::to_time_t(now);
    tm* localTime = localtime(&currentTime);
    put_time(localTime, "%Y-%m-%d %H:%M:%S"); 


    //name and open the file in output mode
    Fuel.open("Fuel_Log.csv", ios :: out);

    // import data into the csv file 
    Fuel<<equipment <<endl;
    Fuel<<"Gallons,Date & Time \n";
    Fuel<<quantity,localTime;
    
    Fuel.close();

    //display the date and time
    cout<<put_time(localTime, "%Y-%m-%d %H:%M:%S") ;
    return 0;
}