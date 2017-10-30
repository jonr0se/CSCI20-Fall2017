//Jon Rose
//April Browne
//CSCI 020
//10/11/2017

/*
The purpose of this program is to create a random number generator that picks a number 1-50. 
Then, ask the user for a number input. The program should then compare the user's number to the computer's number.
A "5,4,3,2,1" timer should display, then display the messages, "Too Low", "Too High", or "Just Right"
If the number is within the range (1-50), but too low the program will display "Too Low".
If the number is within the range (1-50), but too high the program will display "Too High".
If the number is within the range (1-50), and the exact same value the program will display "Just Right".
*/
        #include <iostream> // embedded comments iostream
        #include <string>  // string
        #include <ctime> //ctime
        
        using namespace std; // namespace
        
        int RandomNumber(){    // "RandomNumber" function
        srand(time(0));    // srand time 0
    
        return  (rand()%50)+1;   // display rand modulo 100+1 to display values from 1-100
}

        int main () {   // int main
        int i=RandomNumber(); //random number
        double usernum=0; // double usernum
        cout<<"Enter a number in between: 1-50."<<endl; // display this text 
        cin>>usernum; // user input usernum
        for(int t=5; t>0; t--){ 
        cout<<t<<endl;
       }
        if (usernum>50 || usernum<1){
        cout<<"Error: Out of range!"<<endl;
}
        if (usernum<50){
        cout<<"In range!"<<endl;
}
        cout<<"User entered: "<< usernum<< endl;
        cout<<RandomNumber()<<endl;   
        if (usernum==i){
        cout<<"Just Right!"<<endl; 
        }
        if (usernum<i){
        cout<<"Too Low!"<<endl; 
        }
        if (usernum>i){
        cout<<"Too High!"<<endl; 
        

                
}

}