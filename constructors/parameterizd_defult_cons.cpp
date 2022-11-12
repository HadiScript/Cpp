#include<iostream>
using namespace std; 

class complex{
    int a, b;

    public :
    complex(int, int);  // constructor
    void printData(void)
    {
        cout<<" data = "<< " "<<a<<" and "<<b;
    }    
};

complex :: complex(int x, int y)  // parameterize constructor
{
    a = x;
    b = y;

    cout<<"this is the constructor"<<" & "<<"this is the paramterize constructor";
}



int main()
{
    // implicite call
    complex c(5, 7);
    c.printData();

    // explicite call
    complex b = complex(7, 4);
    b.printData();

return 0;
}