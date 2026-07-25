/*
@author: Brandon Muggli
@date: 07/24/26
@purpose: This program collects sale data from the user, and writes the sales data and total sales data to a text file
*/

// include the iostream library for input/output and iomanip for setprecision
// include fstream to allow output of data to text file
#include <iostream>
#include <iomanip>
#include <fstream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // create file object (dataFile) using the fstream operator
    // this operation is covered on page 678 of the textbook
    fstream dataFile;

    // create and open a text file in output mode
    // .open tells the program to open the file 
    // ios::out opens the file in output mode, where the contents of the file are wiped (if the file already exists), and new data is imported
    // this is covered on page 678 of the textbook
    dataFile.open("week9_lab2.txt", ios :: out);

    // initialize program variables to store the number of days and the amount of each sale
    int days = 0;
    float sales = 0.00;
    float totalSales = 0.00;

    // prompt the user for the number of days and store it in the variable (days)
    cout<<"How many days would you like to enter sales data for: ";
    cin>>days;

    // create a heading for (week9_lab2.txt)
    // using (<<) to output data to (dataFile)
    // exporting data to (dataFile) is covered on page 678 of the textbook
    dataFile<<"Sales Over " <<days <<" days" <<endl;
    dataFile<<"------------------" <<endl;

    // initialize a for-loop to capture data for each day
    for (int count = 0; count < days; count++)
    {
        // capture the sales number and store it in (sales)
        cout<<"Please enter the sales amount for day " <<count + 1 <<": ";
        cin>>sales;

        // export data to (dataFile) and set the precision after the decimal point using (fixed) and (setprecision)
        dataFile<<"Day " <<count + 1 <<": " <<fixed <<setprecision(2) <<sales <<"\n";

        // increment (totalSales) by (sales) using the custom increment operator (+=)
        totalSales += sales;
    }

    // create the total sales footnote in (dataFile)
    dataFile<<"=====================" <<"\n";
    // export data to (dataFile) and set the precision after the decimal point using (fixed) and (setprecision)
    dataFile<<"Total Sales: " <<"$" <<fixed <<setprecision(2) <<totalSales <<"\n"; 
    dataFile<<"=====================";

    // close the file object (dataFile)
    dataFile.close();

    return 0;
}
