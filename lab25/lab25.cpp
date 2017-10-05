        #include <iostream> // embedded comments iostream
        #include <string>  // string
        #include <ctime>
        using namespace std; // name space std
        
        class Book
        
        public:
        void Title(string titleGiven);
        string GetTitle() const;
        
        void Author(string authorGiven);
        string GetAuthor() const;
        
        void CopyrightYear(sting CopyrightYearGiven);
        string CopyrightYear() const;
        
        void Print(){
                cout<< "Title of book: "<< GetTitle()<< endl;
                cout <<"Author of book:"<< GetAuthor()<<endl;
                cout<<"Year of copyright: "<< CopyrightYear()<< endl;
        }
        
        private:
        string title;
        string author;
        string copyrightyear;
        
        };
        void Book::Title(string titleGiven){
                title = titleGiven;
                return;
        }
        string Book::GetTitle() const {
    
        return title;
        }
        void Book::Author(string authorGiven){
    
        author = authorGiven;
        return;
        }

        string Book::GetAuthor() const {
    
        return author;
        }

        void Book::CopyrightYear(string CopyrightYear){
    
        copyrightyear = copyrightYearGiven;
        return;
        }

        int Book::GetCopyrightYear() const {
    
        return copyrightyear;
        }
        int main() {
        string title = "";
        string author = "";
        string CopyrightYear = 0;
    
        Book book1; 
        Book book2;
        Book book3;
        Book book4;
        Book book5;
    
        cin.clear();
        cin.sync();
        
        cout << "Please enter a book title: " << endl; 
        getline(cin, title);
        book1.Title(title);
    
        cout << "Please enter the authors name: " << endl;
        getline(cin, author);
        book1.Author(author);
    
        cout << "Please enter the copyright year: " << endl;
        cin >> copyrightyear;
        cin.ignore();
        book1.CopyrightYear(copyrightyear);
    
        //Book 2
        cout << "Please enter a book title: " << endl;
        getline(cin, title);
        book2.Title(title);
    
        cout << "Please enter the authors name: " << endl;
        getline(cin, author);
        book2.Author(author);
    
        cout << "Please enter the copyright year: " << endl;
        cin >> copyrightyear;
        cin.ignore();
        book2.CopyrightYear(copyrightyear);
    
        //Book 3
        cout << "Please enter a book title: " << endl;
        getline(cin, title);
        book3.Title(title);
    
        cout << "Please enter the authors name: " << endl;
        getline(cin, author);
        book3.Author(author);
    
        cout << "Please enter the copyright year: " << endl;
        cin >> copyrightyear;
        cin.ignore();
        book3.CopyrightYear(copyrightyear);
    
        //Book 4
        cout << "Please enter a book title: " << endl;
        getline(cin, title);
        book4.Title(title);
    
        cout << "Please enter the authors name: " << endl;
        getline(cin, author);
        book4.Author(author);
    
        cout << "Please enter the copyright year: " << endl;
        cin >> copyrightyear;
        cin.ignore();
        book4.CopyrightYear(copyrightyear);
    
        //Book 5
        cout << "Please enter a book title: " << endl;
        getline(cin, title);
        book5.Title(title);
    
        cout << "Please enter the authors name: " << endl;
        getline(cin, author);
        book5.Author(author);
    
        cout << "Please enter the copyright year: " << endl;
        cin >> copyrightyear;
        cin.ignore();
        book5.CopyrightYear(copyrightyear);
    
        book1.Print(); //Print function call 
        book2.Print();
        book3.Print();
        book4.Print();
        book5.Print();
   
        return 0;

                
        }