//Jon Rose
//April Browne
//CSCI 020
//10/11/2017

/*
The purpose of this lab is to create a program that will determine the best cell phone plan based on usage.
ATT vs Verizon vs Sprint. Inputs are given. We need to write a program that will automatically determine the best plan and option for the user.
Use if/else and appropriate conditions to complete. ALERT: I must give partial credit to ***Alex Moxon*** he helped a lot with this lab and wrote some of the code. Credit must be given.
*/

        #include <iostream> // embedded comments iostream
        #include <string>  // string
        
        using namespace std; // name space std
        
        int main() {  // int main 
                
                int smartCell = 0; // Variables 
                
                int dumbCell = 0;
                
                int tablet = 0; 
                
                int data = 0;
                
                cout << "Enter the number of smart phones you desire: " << endl; // user inputs number of smart phones desired
                cin >> smartCell;   // user input smartCell
                
                cout << "Enter the number of dumb phones you desire: " << endl; // user inputs number of dumb phones desired
                cin >> dumbCell;   // user input dumbCell
                
                cout << "Enter the number of tablets you desire: " << endl; // user inputs number of tablets desired
                cin >> tablet;      // user input tablet 
                
                cout << "Enter the number of GB you desire: " << endl; // user inputs number of GB they desire
                cin >> data;
                
                if (data == 0) { // if data is 0, this is the best option
                cout << "Your best option is: ATT Family Plan";
                
                }
                
                else if (data <= 2 && tablet == 0 && dumbCell == 0) { // if the user only desires 2 GB or lower, this is the best option 
                cout << "Your best option is: Sprint 2GB Plan";
                
                }
                
                else {             // if the user desires more than 2 GB, this is the best option
                cout << "Your best option is: ATT Unlimited Choice Plan";
                
                }
                
                return 0; 
                
        }
                /*
                Running /home/ubuntu/workspace/lab31/lab31.cpp
                Enter the number of smart phones you desire: 
                1
                Enter the number of dumb phones you desire: 
                1
                Enter the number of tablets you desire: 
                1
                Enter the number of GB you desire: 
                5
                Your best option is: ATT Unlimited Choice Plan
                Process exited with code: 0
                */