        //Jon Rose
        //April Browne
        //CSCI020
        //10/4/2017
        
        /*
        The purpose of this lab was to create a class for a book that will output five different book with
        different title, author, and copyright year. Five objects for the five different books. Then we
        need to print the books so they display the correct information: title, author, and copyright year.
        
        
        
        */
        
        #include <iostream> // embedded comments iostream
        #include <string>  // string
        #include <ctime>
        using namespace std; // name space std
        
        class Book{   // class book
        
        public:                               // public
        void SetTitle(string titleGiven);     // void SetTitle (string titleGiven)
        string GetTitle() const;              // string GetTitle() const;
        
        void SetAuthor(string authorGiven);   // void SetAuthor (string authorGiven)
        string GetAuthor() const;             // string GetAuthor() const;
        
        void SetCopyrightYear(string CopyrightYearGiven);  // void SetCopyrightYear (string CopyrightYearGiven)
        string GetCopyrightYear() const;       // string GetCopyrightYear() const;
        
        void Print(){                    // void Print
                cout<< "Title of book: "<< GetTitle()<< endl;  // display this text with GetTtile
                cout <<"Author of book:"<< GetAuthor()<<endl;  // display this text with GetAuthor
                cout<<"Year of copyright: "<< GetCopyrightYear()<< endl;  // display this text with GetCopyrightYear
        }
        
        private:  // private
        string Title;    // string Title
        string Author;   // string Author
        string CopyrightYear;  // string CopyrightYear
        
        };
        void Book::SetTitle(string titleGiven){  // void Book::SetTitle(string titleGiven)
                title = titleGiven;              // title = titleGiven
                return;                          // return
        }
        string Book::GetTitle() const {      // string Book::GetTitle() const
    
        return title;               // return title
        }
        void Book::SetAuthor(string authorGiven){    // void Book::SetAuthor(string authorGiven)
    
        author = authorGiven;  // author = authorGiven
        return;     // return
        }

        string Book::GetAuthor() const {  // string Book::GetAuthor() const
    
        return author;    // return author
        }

        void Book::SetCopyrightYear(string CopyrightYear){  // void Book::SetCopyrightYear(string CopyrightYear)
    
        copyrightyear = copyrightYearGiven;        // copyrightyear = copyrightYearGiven    // 
        return;            // return
        }

        int Book::GetCopyrightYear() const {  // int Book::GetCopyrightYear() const
    
        return copyrightyear;           // return copyrightyear
        };
        int main() {                  // int main()
        string title = "";         // string title = ""
        string author = "";      // string author = ""
        string CopyrightYear = 0;    // string CopyrightYear = 0
    
        Book book1;            // Book book1
        Book book2;            // Book book2
        Book book3;            // Book book3
        Book book4;            // Book book4
        Book book5;            // Book book5
    
        cin.clear();           // cin.clear()
        cin.sync();            // cin.sync()
        
        cout << "Please enter a book title: " << endl; // display this text
        getline(cin, title);             // getline(cin, title)
        book1.Title(title);              // book1.Title(title)
    
        cout << "Please enter the authors name: " << endl;      // display this text
        getline(cin, author);            // getline(cin, author)
        book1.Author(author);            // book1.Author(author)
    
        cout << "Please enter the copyright year: " << endl;  // display this text
        cin >> copyrightyear;             // input the copyright year
        cin.ignore();                     // cin.ignore()
        book1.CopyrightYear(copyrightyear);       // book1.CopyrightYear(copyrightyear)
    
        //Book 2
        cout << "Please enter a book title: " << endl;      // display this text
        getline(cin, title);             // getline(cin, title)
        book2.Title(title);              // book2.Title(title)
    
        cout << "Please enter the authors name: " << endl;  // display this text
        getline(cin, author);            // getline(cin, author)
        book2.Author(author);            // book2.Author(author)
    
        cout << "Please enter the copyright year: " << endl;  // display this text
        cin >> copyrightyear;           // input the copyright year
        cin.ignore();                   //cin.ignore()
        book2.CopyrightYear(copyrightyear);       // book2.CopyrightYear(copyrightyear)
    
        //Book 3
        cout << "Please enter a book title: " << endl;  // display this text
        getline(cin, title);             // getline(cin, title)
        book3.Title(title);              // book3.Title(title)
    
        cout << "Please enter the authors name: " << endl;  // display this text
        getline(cin, author);            // getline(cin, author)
        book3.Author(author);            // book3.Author(author)
    
        cout << "Please enter the copyright year: " << endl;  // display this text
        cin >> copyrightyear;             //input the copyright year
        cin.ignore();                     // cin.ignore()
        book3.CopyrightYear(copyrightyear);       // book3.CopyrightYear(copyrightyear)
    
        //Book 4
        cout << "Please enter a book title: " << endl;  // display this text
        getline(cin, title);              // getline(cin, title)
        book4.Title(title);               // book4.Title(title)
    
        cout << "Please enter the authors name: " << endl;  // display this text
        getline(cin, author);             // getline(cin, author)
        book4.Author(author);             // book4.Author(author)
    
        cout << "Please enter the copyright year: " << endl;  //display this text
        cin >> copyrightyear;             // input the copyright year
        cin.ignore();                     // cin.ignore()
        book4.CopyrightYear(copyrightyear);        // book4.CopyrightYear(copyrightyear)
    
        //Book 5
        cout << "Please enter a book title: " << endl;  //display this text
        getline(cin, title);              // getline(cin, title)
        book5.Title(title);               // book5.Title(title)
    
        cout << "Please enter the authors name: " << endl;  //display this text
        getline(cin, author);             // getline(cin, author)
        book5.Author(author);             // book5.Author(author)
    
        cout << "Please enter the copyright year: " << endl;  //display this text
        cin >> copyrightyear;              // input the copyright year
        cin.ignore();                      // cin.ignore()
        book5.CopyrightYear(copyrightyear);  //book5.CopyrightYear(copyrightyear)
    
        book1.Print(); //Print function call 
        book2.Print(); //Print fucntion call
        book3.Print(); //Print function call 
        book4.Print(); //Print function call
        book5.Print(); //Print function call
   
        return 0;    //return 0

                
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