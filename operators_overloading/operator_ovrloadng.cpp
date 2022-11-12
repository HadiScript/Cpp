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
    // complex add(complex c)
    // {
    //     complex temp;

    //     temp.a=a+c.a;
    //     temp.b=b+c.b;

    //     return temp;
    // }

    complex operator +(complex c)
    {
        complex temp;

        temp.a=a+c.a;
        temp.b=b+c.b;

        return temp;
    }
    

};



int main()
{
    complex c1, c2, c3;

    c1.setdata(4, 6);
    c2.setdata(7, 5);
    
    // c3=c1.add(c2);
    // c3.showdata();

    // c3=c1.operator+(c2);
    c3=c1+c2;                   // line // 55 and 56 is equal
    c3.showdata();

    // this is the binary operator over loading;
    // its nessecary in the binary operator that 
    //                      __ operator in called in binary operator is left operand 
    //                      __ its is only for the binary operators
}