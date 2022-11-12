#include<iostream>
using namespace std; 

class complex
{
    private: 
    int a,b;

    public: 

    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }

    void showdata()
    {
        cout<<"value of a is :"<<" "<<a<<endl;
        cout<<"value of b is :"<<" "<<b<<endl;
    }
}


int main()
{

complex c1,c2,c3;
c1.setdata(3,4);
c2.setdata(6,7);

c3 = c1+c2;
c3.showdate();

return 0;
}