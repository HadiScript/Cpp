#include<iostream>
using namespace std; 

struct student
{
    char name[25];
    int age;
    float fees;

    void input()
    {
        cout<<"please enter the name of the student"<<endl;
        cin.getline(name, 25);

        cout<<"enter the age of that student"<<endl;
        cin>>age;

        cout<<"enter the school fee"<<endl;
        cin>>fees;
    }

    void display()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"fee is : "<<fees<<endl;
        cout<<"age is : "<<age<<endl;

    }
};



int main()
{ student s1;
s1.input();
s1.display();



return 0;
}