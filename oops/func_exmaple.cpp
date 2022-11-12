#include<iostream>
using namespace std; 


class C2;
class C
{
    int val;
    public :
        void indata(int a)
        {
            val = a;
        }

        friend void exchange(C &, C2 &);


        void disp(void)
        {
            cout<<val<<endl;
        }
};

class C2
{
    int val2;
    public :
        void indata(int a)
        {
            val2 = a;
        }

        friend void exchange(C &, C2 &);

        void disp(void)
        {
            cout<<val2<<endl;
        }
};

void exchange(C & x, C2 & y)
{
    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;
};


int main()
{

    C oc1;
    C2 oc2;

    oc1.indata(1);
    oc2.indata(14);

    exchange(oc1, oc2);

    cout<<"vlaue afther c1 exchanging";
    oc1.disp();
    cout<<"vlaue afther c2 exchanging";
    oc2.disp();


return 0;
}