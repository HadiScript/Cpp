#include<iostream>
#include<math.h>
using namespace std; 

class point 
{
    int a, b;

    friend point dist(point, point);

    public :

        point(int x, int y)
        {
            a = x;
            b = y;
        }

        void disp(void)
        {
            cout<<"the point is = "<<a<<" ,"<<b<<endl;
        }



};

point dist(point o1, point o2)
{
    int side_one;
    int side_two;
    int res;

    side_one = pow((o1.a + o2.a), 2);
    side_two = pow((o1.b + o2.b), 2);
    res = sqrt(side_two + side_one);


    cout<<"distance without any sqrt is = "<<res;

}



int main()
{

    point p(2, 2);
    p.disp();

    point p2(2, 2);
    p2.disp();

    dist(p, p2);


return 0;
}