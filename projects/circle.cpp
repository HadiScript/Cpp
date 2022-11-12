#include<iostream>
using namespace std; 

class circle
{
    int r;
    float area, pi, circium;

    public :
    int set(int R)
    {
         pi = 3.145;
         area = 0;
        if(R >= 0){
         r = R;
        }
        else
        {
            r = 0;
        }
        
    
    }
    void Result()
    {
        area = 2 * pi * r * r; 
        circium =  2 * pi * r;
        cout<<"area of this area is ="<< area <<"m"<<endl;
        cout<<"'circuimference is = "<<circium<<"m";
    }
};


int main()
{

    circle c;
    int R;
    cout<<"enter the value of the radius of the circle"<<endl;
    cin>>R;
    c.set(R);
    c.Result();



return 0;
}