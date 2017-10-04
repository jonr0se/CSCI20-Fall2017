//Jon Rose
//April Browne
//CSCI 020
//9/25/2017
#include <iostream> // iostream
#include <ctime> //ctime
using namespace std; // namespace std

int RandomNumber(){    // "RandomNumber" function
    srand(time(0));    // srand time 0
    
    return  (rand()%100)+1;   // display rand modulo 100+1 to display values from 1-100
}

int main ()    // int main
{
   // srand(time(0));    // srand time 0
    //cout << (rand()%100)+1<< endl;   // display rand modulo 100+1 to display values from 1-100
    //return 0;           // return 0

cout<<RandomNumber()<<endl;        // calling RandomNumber function to display text


    }