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
    cout << (rand()%100)+1<< endl;
    return 0;
}