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
    
    using namespace std; // using name space std
    
    float calcSD(float data[]); // float calcSD float data
    
    int main()  // int main
    {
        int i;  // int i
        int middle; // int middle
        float data[10]; // float data 10 (could be more? 15? 20? 25? etc)
        double average, median;  // double average median
        
       
        cout << "Enter 10 numbers to calculate standard deviation: "; // outputs this text
        
        for(i = 0; i < 10; ++i)  // one for loop
        cin >> data[i];  // allows data input i 
        
        cout << endl << "Standard Deviation = " << calcSD(data);  // outputs text along with calcSD and data
        

        return 0;
        }
        
        float calcSD(float data[]) // float calcSD float data
        {
            
            float sum = 0.0, mean, standardDeviation = 0.0;  // float sum = 0.0 mean standard deviation = 0.0 
            
            
            int i;  // int i
            
            for(i = 0; i < 10; ++i)  // for loop
        {
            sum += data[i];   // adding sum and data of i
        }
            mean = sum/10;  // calculates mean takes sum and divides by 10 in this case
            cout << "Mean = " << mean;  // outputs text an mean value
            for(i = 0; i < 10; ++i)  // for loop
            standardDeviation += pow(data[i] - mean, 2);  //  standard deviation calculation
            
            return sqrt(standardDeviation / 10); // calculation 
            
            
        }
        
        /*
        
        
    Running /home/ubuntu/workspace/Assign5/Assignment5.cpp
    Enter 10 numbers to calculate standard deviation: 5 12 13 16 18 25 52 77 88 99

    Standard Deviation = 33.643

    Process exited with code: 0
    */

        
        