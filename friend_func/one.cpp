#include<iostream>
using namespace std; 

class complex
{
    int a, b;

    public:
    void setdata(int x, int y)
    {
        a=x; b=y;
    }
    void showdata()
    {cout<<"a :"<<a<<"and"<<"b :"<<b<<endl;}
    friend void fun();

};

void fun(complex c)
{
    cout<<c.a+c.b;      // f.function canot access the private member  through an object of the classes 
}

int main()
{
    complex c1;
    fun(c1);



return 0;
}