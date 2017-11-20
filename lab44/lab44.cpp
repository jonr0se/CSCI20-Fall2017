//Jon Rose
//April Browne
//CSCI 020
//11/15/17
/*
desc. here.

ALERT: CREDIT MUST BE GIVEN TO ---> ALEX MOXON <--- ALERT: CREDIT MUST BE GIVEN TO ALEX MOXON !!!

*/

            #include<iostream>
            #include<cstring>
            #include<cctype>
            using namespace std;

int main() {
    
            const int first_name = 10;
            const int last_name = 20;
    
            char first[first_name] = "";
            char last[last_name] = "";
    
    
            int i = 0;
    
    
            cout << "Enter your first name, use no more than 10 characters! :" << endl;
            cin >> first;
    
            while (strlen(first) > 10) {
        
            cout << "Error! The first name exceeds the size limit. Please try again: " << endl;
            cin >> first;
        
            }
    
    
            cout << "Enter your last name, use no more than 20 characters! :" << endl;
            cin.getline(last);
    
            while (strlen(last) > 20) {
        
            cout << "Error! The last name exceeds the size limit. Please try again: " << endl;
            cin.getline(last);
        
            }
    
            if (strcmp(first, last) == 0) {
        
            cout << "Error! Your first name and last name are the same!" << endl;
        
            }
            tolower(first)
            strcpy(first, last);
        
            }