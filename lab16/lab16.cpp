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
        struct Stock{
            string name;
            double initial_balance;
            string sector;
            double num_shares;
            
        };
        int main()  // int main
        {
            Stock company_ford;
            Stock company_albert;
            Stock company_apple;
            Stock company_tesla;
            Stock company_wellsfargo;
            Stock company_userinput;
            
            company_ford.name = "FordM";
            company_ford.initial_balance = 18.76;
            company_ford.sector = "A";
            company_ford.num_shares = 87;
            
            double ford_balance = company_ford.initial_balance*company_ford.num_shares;
           
            company_albert.name = "Albertsn";
            company_albert.initial_balance = 34.39;
            company_albert.sector = "C";
            company_albert.num_shares = 542;
            
            double albert_balance = company_albert.initial_balance*company_albert.num_shares;
            
            company_apple.name = "AAPL";
            company_apple.initial_balance = 145.91;
            company_apple.sector = "T";
            company_apple.num_shares = 5;
            
            double apple_balance = company_apple.initial_balance*company_apple.num_shares;
            
            company_tesla.name = "TSLA";
            company_tesla.initial_balance = 375.64;
            company_tesla.sector = "A";
            company_tesla.num_shares = 50;
            
            double tesla_balance = company_tesla.initial_balance*company_tesla.num_shares;
            
            company_wellsfargo.name = "WFC";
            company_wellsfargo.initial_balance = 53.02;
            company_wellsfargo.sector = "F";
            company_wellsfargo.num_shares = 1368;
            
            double wellsfargo_balance = company_wellsfargo.initial_balance*company_wellsfargo.num_shares;
            
            cout << "Enter the company name: "<<endl;
            cin >> company_userinput.name;
            
            cout << "Enter the starting balance: "<< endl;
            cin >> company_userinput.initial_balance;
            
            cout << "Enter the company sector: "<<endl;
            cin >> company_userinput.sector;
            
            cout << "Enter the number of shares:  "<<endl;
            cin >> company_userinput.num_shares;
            
            double userinput_balance = company_userinput.initial_balance*company_userinput.num_shares;
            double total_value = ford_balance + albert_balance + apple_balance + tesla_balance + wellsfargo_balance + userinput_balance;
            cout << "Company name: "<<"Stock price:"<< " Sector:"<< " Number of shares:"<< " Total value:"<< endl;
            
            cout << company_ford.name <<"          "<< company_ford.initial_balance <<"         "<< company_ford.sector<<"          "<< company_ford.num_shares<<"              " << ford_balance << endl;
            
            cout << company_albert.name <<"       "<<  company_albert.initial_balance <<"         "<<  company_albert.sector<<"          "<<  company_albert.num_shares <<"             "<<  albert_balance<< endl;
            
            cout << company_apple.name <<"           "<<  company_apple.initial_balance <<"        "<<  company_apple.sector<<"          "<<  company_apple.num_shares <<"               "<<  apple_balance<< endl;
        
            cout << company_tesla.name <<"           "<<  company_tesla.initial_balance <<"        "<<  company_tesla.sector<<"          "<<  company_tesla.num_shares <<"              "<<  tesla_balance<< endl;
            
            cout << company_wellsfargo.name <<"            "<<  company_wellsfargo.initial_balance <<"         "<<  company_wellsfargo.sector<<"          "<<  company_wellsfargo.num_shares <<"            "<<  wellsfargo_balance<< endl;
            
            cout << company_userinput.name <<"            "<<  company_userinput.initial_balance <<"           "<<  company_userinput.sector<<"          "<<  company_userinput.num_shares <<"               "<<  userinput_balance<< endl;
           
            cout << "Final total: " << endl;
            cout << total_value << endl;
            
        
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