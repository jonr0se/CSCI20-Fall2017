//Jon Rose
//April Browne
//CSCI 020
//10/2/2017


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
    int PTK (int pounds){
        int kilograms=pounds/2.21;
            return kilograms;
            
        
    }

    int KTP(int kilograms){ 
        int pounds=kilograms*2.21;
            return pounds;
    }
    
    
    int main ()            // int main
{
    int random_number = Random(1,1000);
    int kilograms_new= PTK(random_number);
    int pounds_new= KTP(kilograms_new);
    cout<<"The random number is: " <<endl; // display Random between 1 and 10
    cout << random_number<<endl;
    cout<<"Random number used as pound value and converted to kilograms: "<< endl;
    cout<< kilograms_new<<endl;
    cout<<"The kilogram value converted back to pounds: "<< endl;
    cout<< pounds_new;
    
}