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
        struct Stock{       // Stock struct
            string name;    // string name
            double initial_balance; // double needed for deciamls
            string sector;   // string sector
            double num_shares;    // double num_shares needed for decimals
            
        };
        int main()  // int main
        {
            Stock company_ford;     // ford stock
            Stock company_albert;    // albert stock
            Stock company_apple;     // apple stock
            Stock company_tesla;     // tesla stock
            Stock company_wellsfargo;   // wellsfargo stock
            Stock company_userinput;    // userinput data
            
            company_ford.name = "FordM";    // ford stock name
            company_ford.initial_balance = 18.76;  // ford stock start balance
            company_ford.sector = "A";    // ford stock sector
            company_ford.num_shares = 87;    // ford stock shares
            
            double ford_balance = company_ford.initial_balance*company_ford.num_shares;       // calculate total ford value
           
            company_albert.name = "Albertsn";      // albert stock
            company_albert.initial_balance = 34.39;    // albert stock start balance
            company_albert.sector = "C";       // albert stock sector
            company_albert.num_shares = 542;    // albert stock shares 
            
            double albert_balance = company_albert.initial_balance*company_albert.num_shares;    // calculate total albert value
            
            company_apple.name = "AAPL";                  // apple stock
            company_apple.initial_balance = 145.91;       // apple stock start balance
            company_apple.sector = "T";                    // apple stock sector
            company_apple.num_shares = 5;                  // apple stock shares
            
            double apple_balance = company_apple.initial_balance*company_apple.num_shares;     // calculate total apple value
            
            company_tesla.name = "TSLA";                 // tesla stock
            company_tesla.initial_balance = 375.64;      // tesla stock start balance
            company_tesla.sector = "A";                  // tesla stock sector
            company_tesla.num_shares = 50;             // tesla stock shares
            
            double tesla_balance = company_tesla.initial_balance*company_tesla.num_shares;      // calculate total tesla value
            
            company_wellsfargo.name = "WFC";             // wells fargo stock
            company_wellsfargo.initial_balance = 53.02;   // wells fargo stock start balance 
            company_wellsfargo.sector = "F";                // wells fargo stock sector
            company_wellsfargo.num_shares = 1368;          // wells fargo stock shares
            
            double wellsfargo_balance = company_wellsfargo.initial_balance*company_wellsfargo.num_shares;    // calculate total wells fargo value
            
            cout << "Enter the company name: "<<endl; // display this text
            cin >> company_userinput.name;                // user input name
             
            cout << "Enter the starting balance: "<< endl;    // display this text
            cin >> company_userinput.initial_balance;        // user input starting balance
            
            cout << "Enter the company sector: "<<endl;     // display this text
            cin >> company_userinput.sector;                  // user input company sector
            
            cout << "Enter the number of shares:  "<<endl;     // display this text
            cin >> company_userinput.num_shares;                // user input number of shares
            
            double userinput_balance = company_userinput.initial_balance*company_userinput.num_shares;                   // calculates value of company inputted by user
            double total_value = ford_balance + albert_balance + apple_balance + tesla_balance + wellsfargo_balance + userinput_balance;        // calculates total portfolio value
            cout << "Company name: "<<"Stock price:"<< " Sector:"<< " Number of shares:"<< " Total value:"<< endl;                          // table display this text
            
            cout << company_ford.name <<"          "<< company_ford.initial_balance <<"         "<< company_ford.sector<<"          "<< company_ford.num_shares<<"              " << ford_balance << endl;
            
            cout << company_albert.name <<"       "<<  company_albert.initial_balance <<"         "<<  company_albert.sector<<"          "<<  company_albert.num_shares <<"             "<<  albert_balance<< endl;
            
            cout << company_apple.name <<"           "<<  company_apple.initial_balance <<"        "<<  company_apple.sector<<"          "<<  company_apple.num_shares <<"               "<<  apple_balance<< endl;
        
            cout << company_tesla.name <<"           "<<  company_tesla.initial_balance <<"        "<<  company_tesla.sector<<"          "<<  company_tesla.num_shares <<"              "<<  tesla_balance<< endl;
            
            cout << company_wellsfargo.name <<"            "<<  company_wellsfargo.initial_balance <<"         "<<  company_wellsfargo.sector<<"          "<<  company_wellsfargo.num_shares <<"            "<<  wellsfargo_balance<< endl;
            
            cout << company_userinput.name <<"            "<<  company_userinput.initial_balance <<"           "<<  company_userinput.sector<<"          "<<  company_userinput.num_shares <<"               "<<  userinput_balance<< endl;
           
            cout << "Final total: " << endl; // display this text
            cout << total_value << endl; // display the total portfolio value
            
        
         }
        
        /*
        Running /home/ubuntu/workspace/lab16/lab16.cpp
        Enter the company name: 
        FLY
        Enter the starting balance: 
        400
        Enter the company sector: 
        W
        Enter the number of shares:  
        2
        Company name: Stock price: Sector: Number of shares: Total value:
        FordM          18.76         A          87              1632.12
        Albertsn       34.39         C          542             18639.4
        AAPL           145.91        T          5               729.55
        TSLA           375.64        A          50              18782
        WFC            53.02         F          1368            72531.4
        FLY            400           W          2               800
        Final total: 
        113114
        Process exited with code: 0
        
        */