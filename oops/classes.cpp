#include <iostream>
using namespace std;

class empl
{
    private:
        int a, b, c;
    public:
        int d, e;

    void set_data(int a1, int b1, int c1); // deceleration
    void getData(){
        cout<<"value of a is"<<a;
        cout<<"value of b is"<<b;
        cout<<"value of c is"<<c;
        cout<<"value of d is"<<d;
        cout<<"value of e is"<<e;
    }
};

    void empl :: set_data(int a1, int b1, int c1){
         a = a1;
         b = b1;
         c = c1;
    }



int main()
{
    empl harry;
    harry.e = 12;
    harry.d = 1;
    harry.set_data(1,23,4);
    harry.getData();

    return 0;
}