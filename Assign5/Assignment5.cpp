// Jon Rose
// April Browne
// CSCI 020
// 2/26/2018
/* This assignment is to create a program of our own choice. The program should have personal meaning for us. 
The program should help us understand how programming can help in our field. */


    #include <iostream> // include iostream
    using namespace std; // name space std
    
    #include <iostream> // iostream
    #include <cmath> // math
    
    using namespace std;
    
    float calcSD(float data[]);
    
    int main()
    {
        int i;
        float data[10];
        
        cout << "Enter 10 numbers to calculate standard deviation: ";
        
        for(i = 0; i < 10; ++i)
        cin >> data[i];
        
        cout << endl << "Standard Deviation = " << calcSD(data);

        return 0;
        }
        
        float calcSD(float data[])
        {
            
            float sum = 0.0, mean, standardDeviation = 0.0;
        
            
            int i;
            
            for(i = 0; i < 10; ++i)
        {
            sum += data[i];
        }
            mean = sum/10;
            
            for(i = 0; i < 10; ++i)
            standardDeviation += pow(data[i] - mean, 2);
            
            return sqrt(standardDeviation / 10);
        }
        
        /*
        
        
    Running /home/ubuntu/workspace/Assign5/Assignment5.cpp
    Enter 10 numbers to calculate standard deviation: 5 12 13 16 18 25 52 77 88 99

    Standard Deviation = 33.643

    Process exited with code: 0
    */

        
        