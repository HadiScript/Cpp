#include <iostream>
#include <conio.h>
using namespace std;

class student
{
    char name[20], add[20];
    int roll, zip;

public:
    student();
    ~student();
    void read();
    void disp();
};

student :: student()
{
    cout<<"details of student"<<endl;
}

void student :: read()
{

    cout<<"enter the name of the student"<<endl;
    cin>>name;
    cout<<"enter address :"<<endl;
    cin>>add;
    cout<<"enter pincode :"<<endl;
    cin>>zip;

};

void student :: disp()
{
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<add<<endl;
    cout<<zip<<endl;
}

student :: ~student()
{
    cout<<"detail is closed :"<<endl;
}
    

int main()
{
    {
        student s1;
        s1.read();
        s1.disp();
    }

    getch();
    student s2;
    s2.read();
    s2.disp();

    return 0;
}