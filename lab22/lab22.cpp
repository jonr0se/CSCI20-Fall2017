//Jon Rose
//April Browne
//CSCI 020
//9/25/2017
#include <iostream> // iostream
#include <ctime> //ctime

using namespace std;
int main ()
{
    srand(time(0));
    
    for (int g=1; g<=100000; g++)
        if (rand()%100 )
    cout << rand() << endl;
    return 0;
    
}