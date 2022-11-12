#include<iostream>
using namespace std; 

class complex{
    int a, b;

    public :
    complex(void);  // constructor
    void printData(void)
    {
        cout<<" data = "<< " "<<a<<" and "<<b;
    }    
};


complex :: complex(void) // this is the default constructor becouse it cant add any parimeter
{
    a = 0;
    b = 0;

    cout<<"this is the constructor"<<" & "<<"this is the default constructor";
}


int main()
{
    complex c;
    c.printData();



return 0;
}