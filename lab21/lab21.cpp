// Jon Rose
// April Browne
// CSCI 020
// 9/20/2017
/*
The purpose of the lab was to create a wind chill calculator. An input of velocity and temperature is 
given and four outputs are produced. The four outputs are wind speed (input), old formula output, new 
formula output, and the difference between the two outputs. Many commands were required and the math library was used. 

Problem Statement

This program will output information about windchills, based on the user’s inputs of temperature and starting wind speed.  
The table should produce columns for wind speed, the windchill according to the old formula, the windchill according to
the new formula, and the difference between the two windchills. 
OldStyleWindChill\:=\:0.081\:\left(3.71\:\sqrt{velocity}\:+\:5.81\:-\:0.25\:\cdot\:velocity\right)\left(tempF\:-\:91.4\right)\:+\:91.4OldStyleWindChill=0.081(3.71velocity−−−−−−√+5.81−0.25⋅velocity)(tempF−91.4)+91.4
NewStyleWindChill\:=\:35.74\:+\:0.6215\:\cdot\:tempF\:-\:35.75\left(velocity^{0.16}\right)+0.4275\:\cdot\:tempF\cdot\left(velocity^{0.16}\right)NewStyleWindChill=35.74+0.6215⋅tempF−35.75(velocity0.16)+0.4275⋅tempF⋅(velocity0.16)

// The purpose of this lab is to display wind speed and wind chill to calculate the difference between the two. 

// There should be four outputs in this lab.

Requirements
Use appropriate math library functions

Input
Temperature : 30; windspeed(velocity): 4
Temperature : 39.25; windspeed(velocity): 10
Temperature: 100; windspeed (velocity): 2

Output
Wind Speed       Old Formula       New Formula     Difference
*/

#include <iostream> //iostream
#include <math.h>  //math library
using namespace std; // namespace std

int main(){     //int main
    double temperature=0;   // double temp var
    double velocity=0;   // double velocity var
    double difference=0;  // double difference var
    double newwindchill=0;  // double newwindchill var
    double oldwindchill=0;   // double oldwindchill var
    cout <<"Please enter the velocity and press enter: ";     // display this text
    cin>>velocity;                                            // take the user input for velocity
    cout<<"Please enter the temperature and press enter: ";   // display this text
    cin>>temperature;                                         // take the user input for temp

    newwindchill=35.74+0.6215*temperature-35.75*pow(velocity,0.16)+0.4275*temperature*pow(velocity,0.16);    // new wind chill formula method
    oldwindchill=0.081*(3.71*sqrt(velocity)+5.81-0.25*velocity)*(temperature-91.4)+91.4;                     // old wind chill formula method
    cout << "The wind speed is: " << velocity<< "."<<endl;                                    // display this text and display velocity input
    cout << "The old formula says: " <<oldwindchill <<" degrees."<<endl;                      // display this text and display old wind chill 
    cout << "The new formula says: " <<newwindchill<<" degrees." <<endl;                      // display this text and display new wind chill

    difference=newwindchill-oldwindchill;                                                     // calculate the difference between new and old
    cout <<"The difference between the two is: "<< difference<< "." <<endl;                   // display the difference in the run section 
        }
        
/*
Running /home/ubuntu/workspace/lab21/lab21.cpp
Please enter the velocity and press enter: 4
Please enter the temperature and press enter: 30
The wind speed is: 4.
The old formula says: 30.5753 degrees.
The new formula says: 25.767 degrees.
The difference between the two is: -4.8083.


Process exited with code: 0

Running /home/ubuntu/workspace/lab21/lab21.cpp
Please enter the velocity and press enter: 10
Please enter the temperature and press enter: 39.25
The wind speed is: 10.
The old formula says: 27.8601 degrees.
The new formula says: 32.713 degrees.
The difference between the two is: 4.85286.


Process exited with code: 0



*/