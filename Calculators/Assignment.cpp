//Jon Rose
//April Browne
//CSCI 020
//9/18/2017


/*
Write a program that calculate the acceleration (m/s^2) of a jet fighter launched from an aircraft-carrier catapult, 
given the jet’s takeoff speed in km/hr and the distance (meters) over which the catapult accelerates the jet from ret 
to takeoff. Assume constant acceleration.  Also calculate the time (seconds) for the fighter to be accelerated to 
takeoff speed.  When you prompt the user, be sure to indicate the units for each input.  Relevant formulas 
(v = velocity, a – acceleration, t = time, s = distance) v=at  s = ½ at^2

Requirements:

Use a struct with at least 3 variables
Use at least one equation
Use input and output
Header comments
Embedded comments based on your pseudocode

Planning:
Create your algorithm for this assignment.  This should be approved prior to creating your program by me.  This can be submitted in person or through Canvas.
Develop:
Once your algorithm is approved, you may start coding it. 
Test:
Test your program with the following data.   Take a screen shot of each run and save it as a comment to the bottom of your code.

Problem #2:
A. 278 km/hr, 92 m
B. 278 km/hr, 700 m
C. 200 km/hr, 60
D. 100 km/hr, 700 m

Save your program and submit it to GitHub.  Submit the link to the program in Github to Canvas. Any program that is not in both Canvas and GitHub will be considered not submitted.
*/


#include <iostream>
using namespace std;

    struct Jet {
        
        double acceleration;
        double TIME;
        double velocity;
        double distance;
        
    };
int main(){
    Jet jetA;
    Jet jetB;
    Jet jetC;
    Jet jetD;
    Jet jetE;
    
    jetA.velocity = (278*1000)/(60*60);
    jetA.distance = 92;
    jetA.acceleration = (jetA.velocity*jetA.velocity)/(2)*jetA.distance;
    jetA.TIME = (2*jetA.distance)/jetA.velocity; 
    
    jetB.velocity = (278*1000)/(60*60);
    jetB.distance = 700;
    jetB.acceleration = (jetB.velocity*jetB.velocity)/(2)*jetB.distance;
    jetB.TIME = (2*jetB.distance)/jetB.velocity;
    
    jetC.velocity = (200*1000)/(60*60);
    jetC.distance = 60;
    jetC.acceleration = (jetC.velocity*jetC.velocity)/(2)*jetC.distance;
    jetC.TIME = (2*jetC.distance)/jetC.velocity; 
    
    jetD.velocity = (100*1000)/(60*60);
    jetD.distance = 700;
    jetD.acceleration = (jetD.velocity*jetD.velocity)/(2)*jetD.distance;
    jetD.TIME = (2*jetD.distance)/jetD.velocity;
    
    cout << "Type velocity, press enter, then type distance: ";
  
    
    cin >> jetE.velocity;
    cin >> jetE.distance;
    jetE.acceleration = (jetE.velocity*jetE.velocity)/(2)*jetE.distance;
    jetE.TIME = (2*jetE.distance)/jetE.velocity;
    
    
    
    cout <<"Jet A is: " << jetA.TIME <<" Jet B is: "<< jetB.TIME << " Jet C is: " << jetC.TIME <<" Jet D is: "<< jetD.TIME << " Jet E is: "<< jetE.TIME;
    }
    
    /*
    
    Running /home/ubuntu/workspace/Calculators/Assignment.cpp
    Type velocity, then distance: 50
    100
    Jet A is: 2.38961 Jet B is: 18.1818 Jet C is: 2.18182 Jet D is: 51.8519 Jet E is: 4

    Process exited with code: 0

    */