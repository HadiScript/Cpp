#include<iostream>
using namespace std; 


class point {

    int a, b;

    public : 
        point( int x, int y )
        {
            a = x;
            b = y;
        }

        void display(void)
        {
            cout<<" the point is ="<<a<<" ,"<<b<<endl; 
        }

};





int main()
{
    point p(1, 5);
    p.display();
    point q(5, 7);
    q.display();

    



return 0;
}