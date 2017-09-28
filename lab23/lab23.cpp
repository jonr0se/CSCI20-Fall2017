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
    num_one=num_x;     // num_one = num_x
    num_two=num_y;    // num_two = num_y
}
    int random(num_x, num_y);   // int random starting with num_x and num_y
{
        Swap(num_x, num_y);    // swap num_x with num_y
        return rand()%(num_x-num_y) + num_x;    // random between num_x and num_y + num_x
}
    int main ()            // int main
{
    
    srand(time(0));                  // srand time 0
    cout << (rand()%100)+1<< endl;        // cout rand modulo 100+1 to get values 1-100
    return 0;                            // return zero not needed still need to edit code looking for assistance
    

}
/*
Running /home/ubuntu/workspace/lab23/lab23.cpp
/home/ubuntu/workspace/lab23/lab23.cpp: In function ‘void Swap(int&, int&)’:
/home/ubuntu/workspace/lab23/lab23.cpp:14:13: error: ‘num_x’ was not declared in this scope
     num_one=num_x;
             ^
/home/ubuntu/workspace/lab23/lab23.cpp:15:13: error: ‘num_y’ was not declared in this scope
     num_two=num_y;
             ^
/home/ubuntu/workspace/lab23/lab23.cpp: At global scope:
/home/ubuntu/workspace/lab23/lab23.cpp:17:16: error: ‘int random’ redeclared as different kind of symbol
     int random(num_x, num_y);
                ^
In file included from /usr/include/c++/4.8/cstdlib:72:0,
                 from /usr/include/c++/4.8/ext/string_conversions.h:41,
                 from /usr/include/c++/4.8/bits/basic_string.h:2815,
                 from /usr/include/c++/4.8/string:52,
                 from /usr/include/c++/4.8/bits/locale_classes.h:40,
                 from /usr/include/c++/4.8/bits/ios_base.h:41,
                 from /usr/include/c++/4.8/ios:42,
                 from /usr/include/c++/4.8/ostream:38,
                 from /usr/include/c++/4.8/iostream:39,
                 from /home/ubuntu/workspace/lab23/lab23.cpp:5:
/usr/include/stdlib.h:321:17: error: previous declaration of ‘long int random()’
 extern long int random (void) __THROW;
                 ^
/home/ubuntu/workspace/lab23/lab23.cpp:17:16: error: ‘num_x’ was not declared in this scope
     int random(num_x, num_y);
                ^
/home/ubuntu/workspace/lab23/lab23.cpp:17:23: error: ‘num_y’ was not declared in this scope
     int random(num_x, num_y);
                       ^
/home/ubuntu/workspace/lab23/lab23.cpp:18:1: error: expected unqualified-id before ‘{’ token
 {
 ^
 */