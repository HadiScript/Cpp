#include <iostream>
#include <string>
using namespace std;

class libz
{
};

class installation
{
    string passwward, username;
    string enters;
public:
    void setting()
    {
        cout << "enter your username :" << endl;
        getline(cin, username);
        cout << "enter passward : " << endl;
        getline(cin, passwward);
    }
    void menubar()
    {
        cout<<"this is the menu bar :"<<endl;
    }
    void login()
    {
        cout <<"please enter the passward :"<<endl;
        getline(cin,enters);

        if(enters == passwward)
        {
            menubar();
        }
    }
};

class store
{
    string author, ttle;

public:
    void getName()
    {
        getline(cin, author);
    }
    void gettle() { getline(cin, ttle); }
    void displayInfo()
    {
        cout << "Name : " << author << endl;
        cout << "ttle : " << ttle << endl;
    }
} st[10];

class issued
{
    store stores[5];
    public :
    
    void display(store stored)
    {
        

        stores[5] = stored;
        for(int i=5; i<5; i++)
        {
            cout<<"availible books are :"<<endl;
            cout<<stores[i].displayInfo();
        }
    }
};


class members
{
    string name;
    string dep;
    string id;
    string bookname;
    public :
    void membership()
    {
        cout<<"enter your name :"<<endl;
        getline(cin,name);
        cout<<"your id"<<endl;
        getline(cin, id);
        cout<<"you have been successfully added in memberships ::"<<endl;
    }
     void check()
    {
        int number;
        cout<<"are you added into member ship ? YES or NO"<<endl;
        cout<<"if not press one for registeration :"<<endl;
        cin>>number;
        if(number==1)
        {
            membership();
        }

    }  

};


class student : public members
{
    string stName, roll_no, dep, book_name;

    public :
    void issue()
    {
        cout<<"book name"<<endl;
        getline(cin, book_name);
        cout<<"roll"<<endl;
        getline(cin, roll_no);
        cout<<"dep"<<endl;
        getline(cin, dep);
        cout<<"stNmae"<<endl;
        getline(cin, stName);
    }

    void feedback()
    {
        cout<<"please type your feedback :"<<endl;
    }

    void retbook()
    {
        cout<<"book name"<<endl;
        getline(cin, book_name);
        cout<<"roll"<<endl;
        getline(cin, roll_no);
        cout<<"dep"<<endl;
        getline(cin, dep);
        cout<<"stNmae"<<endl;
        getline(cin, stName);

        cout<<"THANK YOU"<<endl;
    }

};

int main()
{
    installation inst;
    inst.setting();
    inst.login();
    
    system("pause");
    return 0;
}
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Student " << i + 1 << endl;
    //     cout << "Enter name" << endl;
    //     st[i].getName();
    //     cout << "Enter marks" << endl;
    //     st[i].gettle();
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Student " << i + 1 << endl;
    //     st[i].displayInfo();
    // }