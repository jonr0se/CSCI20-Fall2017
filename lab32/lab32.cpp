//Jon Rose
//April Browne
//CSCI 020
//10/11/2017

/*
The purpose of this lab is to create a program that calculates the income tax, and the amount owed or amount to be refunded to the user.
The program will take this input: name, filing status (single or married), gross wages, and the amount of tax withheld.
User will input gross wages and marital status then program subtracts the personal exemption of $4,050. And the Single deduction of $6,350 or Married Deduction of $12,700.
If the resulting number is less than zero, then the owed tax is zero. If the number is above zero, use the tax tables to calculate the tax.
*/

        #include <iostream> // embedded comments iostream
        #include <string>  // string
        #include <cmath> // cmath 
        using namespace std; // using name space std
        
        int main() {  // int main
                
        // required variables 
        string nameGiven = "";    // string nameGiven
        char marriageStatus = ' ';  // char maritalStatus
        double grossIncome = 0;   // double grossIncome is 0
        double taxWithheld = 0;  // double taxWithheld is 0
        double taxOwed = 0;   // double taxOwed is 0
        double refund = 0;    // double refund is 0
        double wageDeduction = 0;  // double wageDeduction
        const double singleDeduction = 10400;  // const double singleDeduction
        const double marriedDeduction = 16750;  // const double marriedDeduction
        
        // user inputs
        cout << "Enter name: "; // cout enter name
        getline(cin, nameGiven);  // getline (cin, nameGiven)
        
        cout << "Single or Married (type s or m): "; // display this text Single or Married type "s" or "m"
        cin >> marriageStatus;    // user input marriage status
        
        cout << "Gross Income: ";   // display this text Gross Income
        cin >> grossIncome;    // user input gross income
        
    
        cout << "Amount Withheld: ";  // display this text Amount Withheld
        cin >> taxWithheld;     // user input tax amount withheld
        cout << endl;   // cout end
    
        // if and else if statements to calculate tax for singles not married
        if (marriageStatus == 's' && grossIncome <= 9325.0) {  // if user enters s for marriage status and gross income is less than or equal to 9325
        
        taxOwed = grossIncome * 0.10;    // run this equation tax owed = gross income times 0.10
        }
        else if (marriageStatus == 's' && grossIncome >= 9326.0 && grossIncome <= 37950.0) { // if gross income is greater than 9326 and less than 37950
        
        taxOwed = 932.50 + ((grossIncome - 9325.0) * 0.15);      // tax owed = that equation
        }
        else if (marriageStatus == 's' && grossIncome >= 37951.0 && grossIncome <= 91900.0) { // if gross income is greater than 37951 and less than 91900
        
        taxOwed = 5226.25 + ((grossIncome - 37950.0) * 0.25); // tax owed = that amount
        }
        else if (marriageStatus == 's' && grossIncome >= 91901.0 && grossIncome <= 191650.0) { // if gross income is greater than 91901 and less than 191650
        
        taxOwed = 18713.75 + ((grossIncome - 91900.0) * 0.28); // tax owed = that amount
        }
        else if (marriageStatus == 's' && grossIncome >= 191651.0 && grossIncome <= 416700.0) { // if gross income is greater than 191651 and less than 416700
        
        taxOwed = 46643.75 + ((grossIncome - 191650.0) * 0.33); // tax owed = that amount
        }
        else if (marriageStatus == 's' && grossIncome >= 416700.0) { // if gross income is greater than 416700
        
        taxOwed = 46643.75 + ((grossIncome - 191650.0) * 0.33); // tax owed = that amount
        }
    
    
        // if and else if statements to calculate tax for married couples not singles
        if (marriageStatus == 'm' && grossIncome <= 18650.0) { // if gross income is less than 18650
        
        taxOwed = grossIncome * 0.10; // tax owed = that amount
        }
        else if (marriageStatus == 'm' && grossIncome >= 18650 && grossIncome <= 75900.0) { // if gross income is greater than 18650 and less than 75900
        
        taxOwed = 1865.0 + ((grossIncome - 18650.0) * 0.15); // tax owed = that amount
        }
        else if (marriageStatus == 'm' && grossIncome >= 75901.0 && grossIncome <= 153100.0) { // if gross income is greater than 75900 and less than 153100
        
        taxOwed = 10452.50 + ((grossIncome - 75900.0) * 0.25); // tax owed = that amount
        }
        else if (marriageStatus == 'm' && grossIncome >= 153101.0 && grossIncome <= 233350.0) { // if gross income is greater than 153101 and less than 233350
        
        taxOwed = 29752.50 + ((grossIncome - 153100.0) * 0.28); // tax owed = that amount
        }
        else if (marriageStatus == 'm' && grossIncome >= 233350.0 && grossIncome <= 416700.0) { // if gross income is greater than 233350 and less than 416700
        
        taxOwed = 52222.50 + ((grossIncome - 233350.0) * 0.33);// tax owed = that amount
        }     
        else if (marriageStatus == 'm' && grossIncome >= 416700.0){ // if gross income is greater than 416700
        
        taxOwed = 112728.0 + ((grossIncome - 470700.0)) * 0.396; // tax owed = that amount
        }
    
        // Switch statements that assign deductions based on being either single or married
        switch (marriageStatus) { // switch marriage status
        
        case 's':  // case s
        case 'S':  // case S
        wageDeduction = singleDeduction;  // wage deduction = single deduction 
        break;  // break
        
        case 'm':  // case m
        case 'M': // case M 
        wageDeduction = marriedDeduction; // wage deduction = married deduction
        break;  // break
        
        default: // default case
        cout << "Please restart and follow the proper guidelines for your given civil status." << endl; // display this text
        break; // break
        } // }
    
        refund = wageDeduction - taxOwed; // Calculates total amount that should be refunded equation
    
        // If else statements that calculate if the tax is larger than the withholdings, refund is set to 0
        if (taxOwed > taxWithheld) { // if tax owed greater than tax withheld
        refund = 0.0; // refund will be zero
        } // }
        else { // else
        refund = refund; // refund = refund
        } // }
        // printing receipt
        cout << "Name: " << nameGiven << endl; // name user input name
        cout << "Total Gross Adjusted Income: " << grossIncome << endl; // display gross income amount
        cout << "Total Tax Owed: " << taxOwed << endl;  // display tax owed amount
        cout << nameGiven << " is entitle to a refund of: $" << refund << endl; // name given is entitled to this amount
    
        return 0; // return 0
        } // }
        
        
        /*
        Running /home/ubuntu/workspace/lab32/lab32.cpp
        Enter name: Larry
        Single or Married (type s or m): s
        Gross Income: 65,000
        Amount Withheld: 
        Name: Larry
        Total Gross Adjusted Income: 65
        Total Tax Owed: 6.5
        Larry is entitle to a refund of: $0

        Process exited with code: 0
        */