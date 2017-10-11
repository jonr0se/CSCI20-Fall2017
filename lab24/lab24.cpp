//Jon Rose
//April Browne
//CSCI 020
//10/2/2017

/*
Header Comment: The purpose of this lab was to create a program that first generates a random number between 1 and 1000, then the program
converts the randomly generated value into kilograms using an equation, then the program converts the number back to pounds, 
using the kilogram value.
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
    int PoundToKilo (int pounds){ // PoundToKilo using int pounds
        int kilograms=pounds/2.21; // equation to convert random value to kilograms
            return kilograms;     // return kilograms
            
        
    }

    int KiloToPound(int kilograms){ // KiloToPound using int kilograms
        int pounds=kilograms*2.21; // equation to convert kilogram value back to pounds
            return pounds;       // return pounds
    }
    
    
    int main ()            // int main
{
    int random_number = Random(1,1000);       // random_number used to choose random number between 1 and 1000
    int kilograms_new= PoundToKilo(random_number); // kilograms_new using the PoundToKilo equation to get the kilogram value
    int pounds_new= KiloToPound(kilograms_new);   // pounds_new using the KiloToPound equation to get the final pound value
    cout<<"The random number is: " <<endl; // display Random between 1 and 10
    cout << random_number<<endl;           // this displays the original random number value, which in this program is used as a pounds value
    cout<<"Random number used as pound value and converted to kilograms: "<< endl;  // display this text
    cout<< kilograms_new<<endl;              // this displays the random number value converted into the kilogram value using the equation in PoundToKilo
    cout<<"The kilogram value converted back to pounds: "<< endl;  // display this text
    cout<< pounds_new;                      // this displays the kilogram value converted into the pound value using the equation in KiloToPound
    
}

/*
Running /home/ubuntu/workspace/lab24/lab24.cpp
The random number is: 
133
Random number used as pound value and converted to kilograms: 
60
The kilogram value converted back to pounds: 
132

Process exited with code: 0
*/