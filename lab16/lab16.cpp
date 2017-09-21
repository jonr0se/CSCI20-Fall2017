//Jon Rose
//April Browne
//CSCI 020
//9/20/2017
/*
Create a struct for holding a stock portfolio.  It should hold the following information about stocks: stock name, sector, current share price, and number of shares owned.  
The stock sector is a single character which specifies the type of company, according to the following code: 
A - Auto Companies

C - Consumer Products

F - Financial/Insurance

I - Industrial

T - Technology.
Write a program which allows the user to enter stock data, calculates the total stock value, and prints out the data.
Four stock objects.
Input variables for the stock
FordM A 18.76 87

Albertsn C 34.39 542

AAPL T 145.91 5

TSLA A 375.64 50

WFC F 53.02 1368
A stock of your choice
Program should output the data and individual total for each stock and the total value of the portfolio.
Example:
Stock Name      No of Shares     Current Value    Total Value
-------------       ---------------     ----------------    --------------
FordM               87                   18.76               1632.12
Total Portfolio: $1632.12
NOTE: it doesn't have to line up perfectly.


        #include <iostream> 
        #include <cmath>
        using namespace std;
        int main() 
        {
            float a;
            float p = 10000; 
            float r = .01;
            for(int day = 1; day <=20; day++) {
            a = p * pow (1+r, day);
            cout << day << " -------- " << a << endl;
            }
        }
        */
        
        #include <iostream> // embedded comments iostream
        #include <string>  // string
        using namespace std; // name space std
        
        int main()  // int main
        {
            double start_balance, balance, rate, contributions, goal;  // double for decimals
            int years = 0;   // int years is 0
            
            string name; // string name
            cout << "Please enter the name of the company: "; // display this text and ask for input
            cin >> name;  // cin name run input
            
            string sector;  // string sector
            cout << "Please enter the sector of the company (A,C,F,I,T): ";   // display this text wait for user input
            cin >> sector;  // cin sector run input
            
            cout << "Enter the initial investment amount: "; // display this text and wait for user input
            cin >> start_balance;   // cin start_balance put input in
            
            cout << "Enter the yearly contribution (can be 0): "; // display this text
            cin >> contributions; // cin contributions
            
            cout << "Enter the interest rate (usually 0-5): "; // dsplay this text
            cin >> rate; // cin rate
            
            cout << "What is your monetary goal: "; // display this text
            cin >> goal;  // cin goal
            
            balance = start_balance; // balance = start_balance
            
            
            while (balance<goal) // while statement balance is less than goal
            {
                years++; // years++ math
                double interest = balance * (rate/100); // math to calculate interest
                balance = balance + interest + contributions; // final balance math
            }
            // display the text below as the final output of user's input in a single sentence
            cout << "It will take " << name << " " << "("<<sector<<")" << " " <<  years << " year(s) to reach your goal of " << goal << " dollars. " << endl;
        }
        
        /*
        Running /home/ubuntu/workspace/lab16/lab16.cpp
        Enter initial investment: 50
        Enter yearly contribution: 50
        Enter interest rate: 5
        What is your goal: 500
        It took 8 years to reach your goal of 500 dollars. 

        Process exited with code: 0
        
        Running /home/ubuntu/workspace/lab16/lab16.cpp
        Please enter the name of the company: Ford
        Enter the initial investment amount: 5500 
        Enter the yearly contribution (can be 0): 0
        Enter the interest rate (usually 0-5): 2.5
        What is your monetary goal: 7500
        It will take Ford 13 years to reach your goal of 7500 dollars. 


        Process exited with code: 0
        
        */