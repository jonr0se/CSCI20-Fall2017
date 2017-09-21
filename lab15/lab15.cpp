/* Asks for 5 different variables.
It must be at least one paragraph long (you may make it up or use a premade one).
Initialize the variables to a default of your choice.  These can either be the appropriate word OR something completely ridiculous.
There is no input for this assignment
Output the paragraph of mad libs with your variable values correctly embedded in the mad lib.  Format it so it is readable.

Jon Rose

April Browne
CSCI 020
9/11/2017
*/

        #include <iostream> // io stream embedded comments
        #include <string> // string
        
        using namespace std; //namespace std
        
        int main() // int main
        {
            string first_verb=""; // string var firstverb
            cout << "Type a verb ending with -ing: "; // displays this text
            cin >> first_verb; // input var firstverb
            
            string second_verb=""; // string var secondverb
            cout << "Type a verb ending with -ed: "; // display this text
            cin >> second_verb; // input var secondverb
            
            string first_adj=""; // string var firstadj
            cout << "Type an adjective please: "; // display this text
            cin >> first_adj; // input var firstadj
            
            string first_noun=""; // string var firstnoun
            cout << "Type a noun please: "; // display this text
            cin >> first_noun; // input var firstnoun
            
            string third_verb=""; // string var thirdverb
            cout << "Type a verb in the past tense: "; // displays this text
            cin >> third_verb; // input var firstverb
            
            string fourth_verb=""; // string var fourthverb
            cout << "Type a verb in the past tense: "; // displays this text
            cin >> fourth_verb;
            
            string second_adj=""; // string var secondadj
            cout << "Type an adjective please: "; // display this text
            cin >> second_adj; // input var secondadj
            
            string second_noun=""; // string var secondnoun
            cout << "Type a noun please: "; // display this text
            cin >> second_noun; // input var secondnoun
            
            
            
            
            cout << "One time I was " << first_verb << " and I " << second_verb << " (on) a " << first_adj << " " << first_noun << "! ";
            cout << "The next day I " << third_verb << " and " << fourth_verb << " (on) a " << second_adj << " " << second_noun <<". ";
            
            
            /*
            
            Running /home/ubuntu/workspace/lab15/lab15.cpp
            Type a verb ending with -ing: biking
            Type a verb ending with -ed: biked
            Type an adjective please: red
            Type a noun please: road
            One time I was biking and I biked a red road! 

*/
            
            
            
            
            
            
        }
            