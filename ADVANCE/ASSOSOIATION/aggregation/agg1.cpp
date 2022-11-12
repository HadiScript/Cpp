#include <iostream>
using namespace std;

class address
{
    string city, state, locacity;

public:
    address(string ccity, string cstate, string clocacity)
    {
        city = ccity;
        state = cstate;
        locacity = clocacity;
    }
};

class student
{
    address*adrs;

public:
    int id;
    string name;
    student(string n, int i, address*add)
    {
        adrs = add;
        id = i;
        name = n;
    }
    void display()
    {
        cout<<"id of the student is :"<<id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"city :"<<adrs->state<<endl;

    }
};

int
main()
{
    address a1("karachi", "sindh", "north_nazimabad");
    student s1("hadi", 12, &a1);
    s1.display();
    return 0;
}