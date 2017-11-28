#include <iostream> // include iostream
#include <iostream> // include iostream
#include <cstring>  // include cstring
using namespace std;   // using namespace std

int main() {  // int main
    int nameLength = 0; // int (variable) nameLength = 0 set equal to 0
    char * name = new char[]; // char * name = new char [] (character name = new char[])

    cout << "Please enter a 10 letter word or less" << endl; // display this text "PLease eneter a 10 letter word or less"
    cin >> name;   // enter your name input your name

    char * head  = name; // char * head = name (character head = name)
    char * tail = name; // char * tail = name (character tail = name)
    nameLength = strlen(*name); // nameLength = strlen(*name) (nameLength set to strlen(*name), which is 10.

    cout << "Your word is " << firststr << endl; // display "Your word is " and display firststr (firststr)

    if (nameLength<10) // if (nameLength<10) less than ten run this while loop
    {
         while (*head != '\0') // while (*head != '\0')
         {
                cout << *head; // display *head 
                head++; // head++
         }
     }
     else // else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; // display this text "WARNING WORD TOO BIG TO DISPLAY!!"
     }

     cout << endl; // cout endl;

     tail = &name[strlen(name) - 1]; // tail = &name[strlen(name) - 1]

     if (nameLength < 10) // if nameLength is less than 10
     {
          while (tail != name) // while (tail != name)
          {
                 cout << *tail; // cout << *tail
                 tail--; // tail--
          }
     }
     cout << endl; // cout endl

     head = name; // head = name
     tail = &name[strlen(name) - 1]; // 

     head++;
     tail--;

     if (*head == *tail)// if loop
     {
         cout << "It is an palindrome!" << endl;
     }
     else // else loop
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0;  //return 0
     
}