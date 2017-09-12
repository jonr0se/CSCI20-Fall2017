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
            string firstverb; // string var firstverb
            cout << "Type a verb ending with -ing: "; // displays this text
            cin >> firstverb; // input var firstverb
            
            string secondverb; // string var secondverb
            cout << "Type a verb ending with -ed: "; // display this text
            cin >> secondverb; // input var secondverb
            
            string firstadj; // string var firstadj
            cout << "Type an adjective please: "; // display this text
            cin >> firstadj; // input var firstadj
            
            string firstnoun; // string var firstnoun
            cout << "Type a noun please: "; // display this text
            cin >> firstnoun; // input var firstnoun
            
            string thirdverb; // string var thirdverb
            cout << "Type a verb in the past tense: "; // displays this text
            cin >> thirdverb; // input var firstverb
            
            string fourthverb; // string var fourthverb
            cout << "Type a verb in the past tense: "; // displays this text
            cin >> fourthverb;
            
            string secondadj; // string var secondadj
            cout << "Type an adjective please: "; // display this text
            cin >> secondadj; // input var secondadj
            
            string secondnoun; // string var secondnoun
            cout << "Type a noun please: "; // display this text
            cin >> secondnoun; // input var secondnoun
            
            
            
            
            cout << "One time I was " << firstverb << " and I " << secondverb << " (on) a " << firstadj << " " << firstnoun << "! ";
            cout << "The next day I " << thirdverb << " and " << fourthverb << " (on) a " << secondadj << " " << secondnoun <<". ";
            
            
            /*
            
            Running /home/ubuntu/workspace/lab15/lab15.cpp
            Type a verb ending with -ing: biking
            Type a verb ending with -ed: biked
            Type an adjective please: red
            Type a noun please: road
            One time I was biking and I biked a red road! 

*/
            
            
            
            
            
            
        }
            