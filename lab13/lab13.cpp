// Jon Rose
// April Browne
// 8/30/2017
// CSCI 020
// 325,770,082


#include <iostream>
using namespace std;

int main(){
    int Population = 325770082;
    int Time = 0;
    int Date = 2017;
    cout << "How many years has passed? " << endl;   
    cin >> Time;
    Date=Date+Time;
    int Year = Time*365*24*60; 
    int Growth = (Year/12)*60; // I did it this way because C++ cannot handle a number this big.
    Population = Population + Growth;
    
    cout <<"The new population in the year "<<Date <<" is "<< Population << endl; // note
    
    
    }