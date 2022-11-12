#include<iostream>
using namespace std; 


class empl 
{
    int id;
    int salary;

    public:
        void setID(void)
        {
            salary = 122;
            cout<<"enter id of the empl";
            cin>>id;
        }

        void getID(void)
        {
            cout<<"id of these employee is "<<id<<endl;

        }
};

int main()
{
    // empl harry, rabia, hurr, hadi;

    // harry.setID(); 
    // harry.getID(); 

    empl fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
    


return 0;
}