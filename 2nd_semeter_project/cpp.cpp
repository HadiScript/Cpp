#include <iostream>
using namespace std;

class library
{

public:
    string passward;
    string username;
    library()
    {
        username = "";
        passward = "";
    }

    void install();
};

void library::install()
{
    cout << "please enter your user name :" << endl;
    getline(cin, username);
    cout << "please enter passward :";
    getline(cin, passward);
}

class avail
{
public:
    struct listing
    {
        string nameB;
        string authorB;
        int id;
    } obj[10];

    virtual void showingdata() = 0;
    void setdatas()
    {
        obj[0].nameB = "Physics";
        obj[1].nameB = "english";
        obj[2].nameB = "urdu";
        obj[3].nameB = "computer science";
        obj[4].nameB = "theries";
        obj[5].nameB = "programming";
        obj[6].nameB = "athicals";
        obj[7].nameB = "data storing";
        obj[8].nameB = "atomics";
        obj[9].nameB = "brakecths";
        obj[0].authorB = "hadi";
        obj[1].authorB = "mazhar";
        obj[2].authorB = "ali";
        obj[3].authorB = "abbas";
        obj[4].authorB = "hadi";
        obj[5].authorB = "asf";
        obj[6].authorB = "brakecths";
        obj[7].authorB = "brakecths";
        obj[8].authorB = "brakecths";
        obj[9].authorB = "brakecths";
        obj[0].id = 1;
        obj[1].id = 2;
        obj[2].id = 3;
        obj[3].id = 4;
        obj[4].id = 5;
        obj[5].id = 6;
        obj[6].id = 7;
        obj[7].id = 8;
        obj[8].id = 9;
        obj[9].id = 10;
    }
};

class books : public avail
{
public:
    void showingdata()
    {
        cout << "\nid"
             << " "
             << "name of books which are availibles"
             << " "
             << "name of authors " << endl;
        for (int i = 0; i <= 10; i++)
        {
            cout << obj[i].id << " " << obj[i].nameB << " " << obj[i].authorB << endl;
        }
    }

    void addbooks();
    void removebooks();
    void issuedbooks();
};

class actions : public library
{
public:
    void installed()
    {
        if (passward != "", username != "")
        {
            cout << "isntall successfully **" << endl;
        }
    }
};
int main()
{

    books b1;
    b1.showingdata();
    system("pause");
    return 0;
}