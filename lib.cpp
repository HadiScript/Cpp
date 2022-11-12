#include <iostream>
using namespace std;

class libz
{
    string isbn, ttle, author, edition, publication;

public:
    void setting(string isbn, string author, string ttle, string edition, string publication)
    {
        this->author = author;
        this->ttle = ttle;
        this->edition = edition;
        this->isbn = isbn;
        this->publication = publication;
    }
    void getisbn(string a)
    {
        isbn = a;
    }
    void getTtle(string t) { ttle = t; }

    void getAthore(string aut) { author = aut; }
    void getedit(string ed) { edition = ed; }
    void getpublication(string pub) { publication = pub; }
};

class Bookz : public libz
{
public:
    static void addbook(int counter)
    {
    string isbn, ttle, author, edition, publication;

        cout<<"add";
        if(counter<10)
        {
            cout<<"enter isbn";
            getline(cin,isbn);
            cout<<"enter ttle";
            getline(cin,ttle);
            cout<<"enter author";
            getline(cin,author);
            cout<<"enter edition";
            getline(cin,edition);
            cout<<"enter publication";
            getline(cin,publication);
            cout<<"book added"<<endl;
            cout<<"press any key to continue ..."<<endl;

        }

        else
        {
            cout<<"you have reached to max to added :"<<endl;
            cout<<"press any to continue :"<<endl;
        }
        
    };
    void delbook(int counter);
    void searchbook();
    void editbook();
    void viewallbook();
    void quit();
};

int main()
{
    Bookz b1[20];

    int ch, counter = 0;
    cout << "management :" << endl;
    cout << "add book : 1" << endl;
    cout << "2 del book : 1" << endl;
    cout << "3 edit : 1" << endl;
    cout << "4 search book : 1" << endl;
    cout << "5 view all books book : 1" << endl;
    cout << "6 quit : 1" << endl;

    cout << "enter choice" << endl;
    cin >> ch;
    cout << "ch";

for(int i=0; i<10; i++)
{


    switch (ch)
    {
    case 1:
    {
        
        b1[i].addbook(counter);
        break;
    }
    case 2:
        b1[i].delbook(counter);
        break;

    case 3:
        b1[i].editbook();
        break;
    case 4:
        b1[i].searchbook();
        break;
    case 5:
        b1[i].viewallbook();
        break;

    case 6:
        b1[i].quit();
        break;
    default:
        main();
        break;
    }
}
    system("pause");
    return 0;
}