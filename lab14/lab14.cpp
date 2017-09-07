
/* Create a program that emulates the CoinStar machine (turn your coins into cash).  The CoinStar machine accepts a monetary amount of cents. 
It then determines how many quarters, dimes, nickels, and pennies you provided (it assumes that you have the most efficient number of each 
of those denominations).  It should then determine how much you earn in dollars and cents.  It has to take a 10.9% fee.  Then outputs the 
cash voucher.

Uses math operators including modulo.

Test 1: 105

Test 2: 3459

Test 3: 987654321

This is example output.  It doesn’t need to look exactly like this but should have all of this information.

You have entered 90 cents.

That was 3 quarters, 1 dime, 1 nickel and 0 pennies.

The total is $0.90.  After the fee you get $0.80 in cash.

JON ROSE
APRIL BROWNE
CSCI020
9/6/2017
*/


    #include <iostream>  //    embedded comments ! 
    using namespace std;
    int main(){   
        double x;  // double
        int y;     // int y
        cout << " Enter the amount of money. Example: (40.95, 100.44, 105, 3459, 987654321): " << endl;  //display text
        cin >> x;   // cin x
        y = x*100;  // set y = x times 100
        cout << " You gave " << y/25 << " quarters ";  // display text
        y=y%25;                        // math op
        cout << " , " << y/10 << " dimes "; // display text
        y=y%10;                       // math op
        cout << " , " << y/5 << " nickels ";   //display text
        y=y%5;                             //math op
        cout << " , " << y/1 << " pennies. " << endl; //display text
        cout << " You gave " << x << " dollars! " << endl; // amount given shown
        cout << " You'll get " << x*.891 << " dollars because of the fee! " << endl;  // amount actually given because of fee
        return 0;  // return 0
        
}

/*

Running /home/ubuntu/workspace/lab14/lab14.cpp
 Enter the amount of money. Example: (40.95, 100.44, 105, 3459, 987654321): 
3459
 You gave 13836 quarters  , 0 dimes  , 0 nickels  , 0 pennies. 
 You gave 3459 dollars! 
 You'll get 3081.97 dollars because of the fee! 


Process exited with code: 0

*/