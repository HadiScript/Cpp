#include <iostream>
using namespace std;


class number 
{
    int a;

    public:
        number(){}
        number(int num)
        {
            a = num;
        }

        // when no any coppy constrcutor will found then the compiler will give it its own copy constructor
        number(number & obj)
        {
            cout<<"this is the copy const...";
            a = obj.a;
        }

        void disp()
        {
            cout<<"number is thsi object is "<<a<<endl;
        }
};


int main()
{
    number z2, x(213), y, z(24);
    z.disp();
    y.disp();
    x.disp();
    number z1(x); // copy const invoke
    z1.disp();

    z2 = z; // copy const not be called
    number z3 = z; // copy const invoke/

    return 0;
}