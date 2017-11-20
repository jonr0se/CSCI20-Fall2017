//Jon Rose
//April Browne
//CSCI 020
//11/8/17
/* The purpose of this lab is to create a class called ArrayTools which will store a single integer array
and each of the following functions. Use my main function to run your class.
Print – print the array values on the screen in order
Find_min – search the array between two sizes to return the location of the minimum value in that part of the array
Find_max –
Find_sum – return the sum of all values in the array
Num_even/odd – count the number of even and odd numbers in the array
Search – search the array for a specified value and return the location if the value is found and -1 otherwise
Is_sorted – check to see of the array is sorted in ascending order.

ALERT: CREDIT MUST BE GIVEN TO ---> ALEX MOXON <--- ALERT: CREDIT MUST BE GIVEN TO ALEX MOXON !!!

*/
    
    
    #include <iostream> // embedded comments iostream
    #include <string>  // string
        
    using namespace std; // name space std
    
    class ArrayTools { // class ArrayTools
        
        public: // public:
        
        int Find_min(int min, int max); // determines the min based on the parameters given
        int Find_max(int min, int max); // determines the max based on the parameters given 
        int Find_sum(); // determines the sum of the entire array
        int Num_even(); // determines the amount of even numbers
        int Num_odd(); // determines the amount of odd numbers 
        int Search(int find_number); // determines if number of parameter given is stored in the
        string ls_sorted(); // determines if the array is sorted in ascending order
        
        ArrayTools(); // default constructor 
        ArrayTools(int array_one[], int size); // overload constructor
        void Print() const; // print function
        
        
        private: // private:
        // class variables
        int array[]; // int array[]
        int size_; // int size_
        string sorted_; // string sorted
        
        
    }; // };
        
        // default constructor for array and size
        ArrayTools::ArrayTools() { // ArrayTools::ArrayTools() {
            
            int input = 0; // int input = 0;
            size_ = 0; // size_ = 0;
            
            for (int i = 0; i < size_; i++) { // for loop
                
            array[i] = input; // array[i] = input
            input++; // input++ 
            } // }
        } // }
        
            
        // overload constructor based on user input
        ArrayTools::ArrayTools(int array_one[], int size) {
            
            for (int i = 0; i < size; i++) { // for loop
            array[i] = array_one[i]; // array[i] = array_one[i]
            
            } //}
    
            size_ = size;
        }
            // print function that outputs all values stored in the array
            
            void ArrayTools::Print() const {
    
            for (int i = 0; i < size_; i++) {
            
            cout << array[i] << " ";
        
            }
            cout << endl;
        
            return;
            }
            
            // function that returns the minimum value within the ranges given
            
            int ArrayTools::Find_min(int min, int max) {
                
                int i = 0;
                int finding_min = array[min];
                for (int i = min; min <= max; min++) {
                if(array[min] <= finding_min) {
                finding_min = array[min];
                }
                }
    
                return finding_min;
                }

            // function that returns the maximum values within the ranges given
            int ArrayTools::Find_max(int min, int max) {
    
            int finding_max = array[min];
    
            for (int i = min; min <= max; min++) {
        
            if(array[min] > finding_max) {
            
            finding_max = array[min];
            }
            }
    
            return finding_max;
            }
            // function that returns the sum of all values in the array
            int ArrayTools::Find_sum() {
    
            int sum = 0;
    
            for (int i = 0; i < size_; i++) {
        
            sum += array[i];
            }
    
            return sum;
            }
            // function that returns the amount of odd numbers stored in your array
            int ArrayTools::Num_odd() {
    
            int odd_ = 0;
    
            for (int i = 0; i < size_; i++) {
        
            if((array[i] % 2) == 1) {
            
            odd_++;
            }
            }
    
            return odd_;
            }
            
            // function that returns the amount of even numbers stored in your array
            
            int ArrayTools::Num_even() {
    
            int even_ = 0;
    
            for (int i = 0; i < size_; i++) {
        
            if((array[i] % 2) == 0) {
            
            even_++;
            }
            }
    
            return even_;
            }
            
            // function that searches the array for a specified value and returns its location
            
            int ArrayTools::Search(int find_number) {
    
            int i;
    
            for (i = 0; i < size_; i++) {
        
            if(array[i] == find_number) {
            
            return i;
            }
        
            else {
            
            return -1;
            }
            }
            }
            
            // function that checks to see if the array is sorted in ascending order
            string ArrayTools::ls_sorted() { 
            string sorted_;
            int max_val = array[0];
            int sort = 0;
            int i = 0;
            for (i = 0; i < size_; i++) {
            if(array[i] >= max_val) {
            sort++;
            }
            }
            if (sort >= 9) {
            sorted_ = "True";
            }
            else {
            sorted_ = "False";
            }
            return sorted_;
            }
            
            int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
}
     ArrayTools a(myArray, SIZE);
    
    a.Print();
    
    cout << "Min: " << a.Find_min(0,4) << endl;
    cout << "Max: " << a.Find_max(5,10) << endl;
    cout << "Sum = " << a.Find_sum() << endl;
    cout << "Search 10: " << a.Search(10) << endl;
    cout << "Sorted? " << a.ls_sorted() << endl;
    
    return 0;
}