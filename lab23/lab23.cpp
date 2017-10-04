//Jon Rose
//April Browne
//CSCI 020
//9/25/2017
/*
The objective of this lab is to create a random number generator that takes two values (from lowest to highest) and 
swaps the values. Then the program is supposed to select a random number between the two values. 
*/
#include <iostream> // iostream
#include <ctime> //ctime
using namespace std; // namespace std
void Swap(int& num_one, int& num_two)  // void Swap function num_one num_two
{
    int temp;      // int temp meaning temporary
    temp = num_one;    // temp = num_one
    num_one=num_two;    // num_one = num_two
    num_two=temp;      // num_two = temp
         
    
}
    int Random(int num_one, int num_two)   // int random starting with num_x and num_y
{
        Swap(num_one, num_two);    // swap num_x with num_y
        srand(time(0));                 // srand time 0
        return rand()%(num_one-num_two) + num_two;    // random between num_x and num_y + num_x
}
    int main ()            // int main
{
    cout<<"A random number between 1 and 10 is: "<< endl;
    cout<<Random(1, 10)<<endl; // display Random between 1 and 10
    cout<<"A random number between 5 and 82 is: "<< endl;
    cout<<Random(5, 82)<<endl;  // display Random between 5 and 82
    cout<<"A random number between 22 and 73 is: "<< endl;
    cout<<Random(22, 73)<<endl;  // display Random bewteen 22 and 73
              
    


    }