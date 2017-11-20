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
        
    // this class holds all information about items for sale (name, quantity, price) 
    // also includes default / overload constructors and the print function.
    
    class Item {
        public: 
        Item(); // default constructor
        Item(string name, int quantity, double price); // overload Constructor
        void Print() const; // print function
        // mutator functions
        void SetName(string name);
        void SetQuantity(int quality);
        void SetPrice(double price);
        // accessor functions
        const string GetName();
        const int GetQuantity();
        const double GetPrice();
        private:
        // class Variables
        string name_;
        int quantity_;
        double price_;
        };
        Item::Item() {
        name_ = "Un-Available";
        quantity_ = 0;
        price_ = 0.00;
        }
        Item::Item(string name, int quantity, double price) {
        name_ = name;
        quantity_ = quantity;
        price_ = price;
        }
        void Item::Print() const {
        cout <<  name_ << "         " << quantity_ << "       $ " << price_ << endl;
        }
        void Item::SetName(string name) {
    
        name_ = name;
    
        }


        const string Item::GetName() {
    
        return name_;
        }


        void Item::SetQuantity(int quantity) {
    
        quantity_ = quantity;
    
        }



        const int Item::GetQuantity() {
    
        return quantity_;
    
        }


        void Item::SetPrice(double price) {
    
        price_ = price;
    
        }


        const double Item::GetPrice() {
    
        return price_;
        }
        
        
        int main() {
    
        const int SIZE = 10;
        int product_number = 0;
        int count = 0;
        double total = 0.00;
        char continue_shopping = 'y';
    
        Item cart[SIZE * 20];
        Item inventory[SIZE] = {
        
        Item(" The Odyssey           ",      8,     4.25),
        Item(" War and Peace         ",      3,     2.01),
        Item(" The Divine Comedy     ",      8,     5.99),
        Item(" Huckleberry Finn      ",      2,     1.01),
        Item(" The Iliad             ",      9,     4.99),
        Item(" Anna Karenina         ",      4,     2.99),
        Item(" The Catcher in the Rye",      9,     3.99),
        Item(" Gulliver's Travels    ",      2,     2.99),
        Item(" Heart of Darkness     ",      4,     1.99),
        Item("The Bible             ",       1,     4.21)
        };
        
        while ((continue_shopping == 'y') || (continue_shopping == 'Y')) {
        cout << "       BOOK        " << "            QUANTITY" << "     PRICE" << endl;
        for (int i = 0; i < SIZE; i++) {
            
            cout << i + 1 << ") ";
            
            inventory[i].Print();
            
        }
        cout << "Enter the item number to add to your cart. Or enter '0' to finish and check-out:" << endl;
        cin >> product_number;
        
        int num = product_number - 1;
        
        if (product_number == 0) {
            
            continue_shopping = 'n';
            
        }
        
        else {
            
            if (inventory[num].GetQuantity() >  0) {
                
                inventory[num].SetQuantity(inventory[num].GetQuantity() - 1);
                
                cart[count] = inventory[num];
                
                cout << cart[count].GetName() << " was added to your cart."  << endl;
                
                count++;
                
            }
            
            else {
                
                cout << "Out of stock, sorry!" << endl;
                cout << "Enter the item number to add to your cart." << endl;
                cin >> product_number;
                
            }
            
            cout << "(y or n) Would you like to keep shopping?" << endl;
            cin >> continue_shopping;
            
            }
        }
        
        cout << "Current Shopping Cart:" << endl;
        
        for (int i = 0; i <= count; i++)  {
            
            if(cart[i].GetPrice() > 0.000001) {
                
                cout << cart[i].GetName() << "       $" << cart[i].GetPrice() << endl;
                
                total += cart[i].GetPrice();
            }
        }
    
    
    cout << endl;
    cout << "Total: $" << total;
    
    return 0;
}