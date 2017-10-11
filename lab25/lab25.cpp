        //Jon Rose
        //April Browne
        //CSCI020
        //10/4/2017
        #include <iostream> // embedded comments iostream
        #include <string>  // string
        #include <ctime>
        using namespace std; // name space std
        
        class Book{
        
        public:
        void SetTitle(string titleGiven);
        string GetTitle() const;
        
        void SetAuthor(string authorGiven);
        string GetAuthor() const;
        
        void SetCopyrightYear(string CopyrightYearGiven);
        string GetCopyrightYear() const;
        
        void Print(){
                cout<< "Title of book: "<< GetTitle()<< endl;
                cout <<"Author of book:"<< GetAuthor()<<endl;
                cout<<"Year of copyright: "<< GetCopyrightYear()<< endl;
        }
        
        private:
        string Title;
        string Author;
        string CopyrightYear;
        
        };
        void Book::SetTitle(string titleGiven){
                title = titleGiven;
                return;
        }
        string Book::GetTitle() const {
    
        return title;
        }
        void Book::SetAuthor(string authorGiven){
    
        author = authorGiven;
        return;
        }

        string Book::GetAuthor() const {
    
        return author;
        }

        void Book::SetCopyrightYear(string CopyrightYear){
    
        copyrightyear = copyrightYearGiven;
        return;
        }

        int Book::GetCopyrightYear() const {
    
        return copyrightyear;
        };
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
        //
        /*
        
        Running /home/ubuntu/workspace/lab25/lab25.cpp
        /home/ubuntu/workspace/lab25/lab25.cpp:8:9: error: expected unqualified-id before ‘public’
         public:
         ^
        /home/ubuntu/workspace/lab25/lab25.cpp:10:27: error: non-member function ‘std::string GetTitle()’ cannot have cv-qualifier
         string GetTitle() const;
                           ^
        /home/ubuntu/workspace/lab25/lab25.cpp:13:28: error: non-member function ‘std::string GetAuthor()’ cannot have cv-qualifier
         string GetAuthor() const;
                            ^
        /home/ubuntu/workspace/lab25/lab25.cpp:16:35: error: non-member function ‘std::string GetCopyrightYear()’ cannot have cv-qualifier
         string GetCopyrightYear() const;
                                   ^
        /home/ubuntu/workspace/lab25/lab25.cpp:24:9: error: expected unqualified-id before ‘private’
         private:
         ^
        /home/ubuntu/workspace/lab25/lab25.cpp:29:9: error: expected declaration before ‘}’ token
         };
         ^


        Process exited with code: 1
        /*
        */