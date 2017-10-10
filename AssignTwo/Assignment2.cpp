// Jon Rose
// April Browne
// CSCI 020
// 10/9/2017
/*

The purpose of this lab is to create a sales tax calculator that calculates the appropriate tax amount.
Sales tax for: Chico, Paradise, Sacramento, Las Vegas, and Pheonix. (California, Nevada, and Arizona tax rates)
This program takes the price of an item and calculates the sales tax for: state, county, city, and (special).
The program should run at least 10 sales and it will output how much money will be sent to each state, county, and city.

Your online retail company has been tasked with setting up the sales tax calculator to collect and distribute the appropriate sales tax. At this time, 
you are responsible for the sales tax in Chico, CA, Paradise, CA, Sacramento, CA, Las Vegas, NV, and  Pheonix, AZ (http://www.taxrates.com/state-rates/ 
(Links to an external site.)Links to an external site. ).  Create a program that takes the price of an item and calculates the sales tax broken down for 
state, county, city, and special.  Have the program run through at least 10 sales and have it output how much money will be sent to each state, county, and city.

Requirements:
Create a class with the following:

Appropriate accessors and mutators.
Print function.
Minimal variables per class.
Main function that demonstrates all of your classes abilities and should have ALL of the input/output.

Inputs:
28.55
55.87
84.12
32.31
67.89
8.47
69.98
57.79
1000.00
15.00
*/

    #include <iostream>
    using namespace std;

    int main() 
    {
        float numb0;
        
        double no_one = 28.55;
        double no_two=55.87;
        double no_three=84.12;
        double no_four=32.31;
        double no_five=67.89;
        double no_six=8.47;
        double no_seven=69.98;
        double no_eight=57.79;
        double no_nine=1000.00;
        double no_ten=15.00;
        
        
        
        cout << "Money input: " <<endl;
        cin>>numb0;
        
        cout<<"Amount in tax due: "<<endl;
        cout <<(numb0/100)*7.25<<endl;
        cin>> (no_one/100)*7.25;
        cin>> (no_two/100);
        cin>> no_three;
        cin>> no_four;
        cin>> no_five;
        cin>> no_six;
        cin>> no_seven;
        cin>> no_eight;
        cin>> no_nine;
        cin>> no_ten;
        
    return 0;
    
    
    
    
    
    
    
    }


