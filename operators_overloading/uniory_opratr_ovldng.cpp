#include<iostream>
#include<conio.h>
using namespace std;


class complex
{
    int a, b;
     
public:
    void setdata(int x, int y)
    {
        a = x; b = y;
    }
   
    void showdata()
    {
        cout<<"a : "<<a<<" and "<<"b : "<<b<<endl;
    }

    complex operator -()
    {
        complex temp;
        
        temp.a=-a;
        temp.b=-b;
        return temp;
    }

    

};



int main()
{
    complex c1, c2;

    c1.setdata(4, 6);
                            // its uniory operator overloading
    // c2=c1.operator-();   //this is the uniry operator becouse its haven't any arguments
    c2=-c1;                 // both lines are the same

    
    // in the uniary operator haven't any left or right operator called its only depand on the operator behaivior

    c2.showdata();


  
}