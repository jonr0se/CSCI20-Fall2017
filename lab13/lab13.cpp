/* This program will estimate the population of the United States.  Use the data on that site http://www.census.gov/popclock/ 
(Links to an external site.) Links to an external site. for current US population and the four different components of population
change, your program should have the user enter a number of years in the future to predict. It should then calculate and output 
the predicted population size as an integer.  You can ignore the effects of leap seconds, minutes, hours, and days in this prediction.

Use appropriate variable identifiers.
Initialize all variables.
Use appropriate math equations.
Use appropriate input and output statements for the user.
Needs to be easy to update - this means minimal hard coded variables.

Use the following numbers to test your program.

99
26
8
13
43

Something like:

In the year 2018, the population will be xxxxxxxxxxx in the United States.

*/
// Jon Rose
// April Browne
// 8/30/2017
// CSCI 020
// 325,770,082. Around 323M is the current population.


#include <iostream> // embedded comments
using namespace std; // namespace

int main(){    // int main
    int Population = 325770082; // current population exact figured not known
    int Time = 0; // time
    int Date = 2017; // date year 2017
    cout << "How many years has passed? " << endl;   // display: How many years has passed?
    cin >> Time; // input the time
    Date=Date+Time;  // date = date + time vars
    int Year = Time*365*24*60; // equation to calculate output
    int Growth = (Year/12)*60; // I did it this way because C++ can't handle a number this big
    Population = Population + Growth; // population = population + growth
    
    cout <<"The new population in the year "<<Date <<" is "<< Population << endl; // display: The new population in the year (input) is (output)
    
    /*
    Running /home/ubuntu/workspace/lab13/lab13.cpp
    How many years has passed? 
    42
    The new population in the year 2059 is 436146082
    */
    
    }