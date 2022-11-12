#include<iostream>
using namespace std; 

int add(int a, int b)
{
    cout<<"using func with the 2 argu";
    return a+b;
}

int add( int a, int b, int c)
{

    cout<<"using func with the 3 argu";
    return a+b+c;
}

float volumn(double r, int h)
{
    return(3.14*r*r*h);
}

int main()
{

    cout<<"sum"<<add(1,2)<<"\t"<<endl;
    cout<<"sum"<<add(1,2, 3);

    cout<<"area of  the volumn"<<volumn(2, 1)<<"sq";

return 0;
}