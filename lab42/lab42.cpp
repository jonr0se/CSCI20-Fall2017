//Jon Rose
//April Browne
//CSCI 020
//11/8/17
/* The purpose of this lab is to create a program that mimics an online shopping cart.
I am the proprietor of an online shop and have to keep track of inventory, price and the 
user's shopping cart. Create a menu of at least 10 items for the user to choose from.

ALERT: CREDIT MUST BE GIVEN TO ---> ALEX MOXON <--- ALERT: CREDIT MUST BE GIVEN TO ALEX MOXON !!!

*/



    #include <iostream> // embedded comments iostream
    #include <string>  // string
        
    using namespace std; // name space std
    int main(){
        double total_=0.0; // total final cost
        
        // parallel arrays
        string book[10]; // name of books
        int inventory[10]; // quantity of books in storage
        double price[10];  // price of each book
        int purchased[10];  // quantity of books bought
        int book_number = 99; // input number for choosing book to purchase
        int amount = 0; // quantity of books bought
        for (int i = 0; i < 10; i++) {
            purchased[i] = 0;
        }
        book[0] = " The Odyssey           ";
        book[1] = " War and Peace         ";
        book[2] = " The Divine Comedy     ";
        book[3] = " Huckleberry Finn      ";
        book[4] = " The Iliad             ";
        book[5] = " Anna Karenina         ";
        book[6] = " The Catcher in the Rye";
        book[7] = " Gulliver's Travels    ";
        book[8] = " Heart of Darkness     ";
        book[9] = "The Bible             ";
        
         inventory[0] = 8;
         inventory[1] = 3;
         inventory[2] = 8;
         inventory[3] = 2;
         inventory[4] = 9;
         inventory[5] = 4;
         inventory[6] = 9;
         inventory[7] = 2;
         inventory[8] = 4;
         inventory[9] = 1;
         
         price[0] = 4.25;
         price[1] = 2.01;
         price[2] = 5.99;
         price[3] = 1.01;
         price[4] = 4.99;
         price[5] = 2.99;
         price[6] = 3.99;
         price[7] = 2.99;
         price[8] = 1.99;
         price[9] = 4.21;
         
        while (book_number != 0) { // this while loop executes if user enters "0"
        cout << "Enter the item number of the books you'd like to purchase..." << endl;
        cout << "You can enter 0 to checkout." << endl;
        for (int i = 0; i < 10; i++) { // shows book menu
        cout << i + 1 << ". " << book[i] << "   " << inventory[i] << "   $" << price[i] << endl;
        }
        cin >> book_number; // book number taken from user that kicks if input is 0
        if (book_number == 0) {
        break;
        }
        else if ((book_number >= 1) && (book_number <=10)) { // input else-if for book purchasing decision in menu
        cout << "How many books would you like to purchase?" << endl;
        cin >> amount;
        if (inventory[book_number - 1] - amount < 0) { // if statement that checks amount of books in inventory vs. purchased
        cout << "Not able to add this item to cart. Currently not enough in stock." << endl;
        amount = 0;
        book_number = 99;
        }
        else { 
        inventory[book_number - 1] = inventory[book_number - 1] - amount;
        purchased[book_number - 1] = purchased[book_number - 1] + amount;
        total_ = total_ + (amount * price[book_number - 1]);
        amount = 0;
        book_number = 99;
        }
    }
    else {
    cout << "INVALID INPUT. PLEASE RESTART AND TRY AGAIN" << endl;
    }
    }
    cout << "Your Cart:" << endl; // total of user cart receipt 
    cout << "   Book Name ~ Amount Bought ~ Price" << endl;
    
    for (int i = 0; i < 10; i++) { //Display loop of user cart
    
    cout << i + 1 << ". " << book[i] << "   " << purchased[i] << "   $" << price[i] << endl;
    
    }

    cout << "Total Amount: $" << total_ << endl; 

    }
    /*
    Running /home/ubuntu/workspace/lab42/lab42.cpp
    Enter the item number of the books you'd like to purchase...
    You can enter 0 to checkout.
    1.  The Odyssey              8   $4.25
    2.  War and Peace            3   $2.01
    3.  The Divine Comedy        8   $5.99
    4.  Huckleberry Finn         2   $1.01
    5.  The Iliad                9   $4.99
    6.  Anna Karenina            4   $2.99
    7.  The Catcher in the Rye   9   $3.99
    8.  Gulliver's Travels       2   $2.99
    9.  Heart of Darkness        4   $1.99
    10. The Bible                1   $4.21
    */
