#include <iostream>
using namespace std;

// forward decleration
class complex;

class cal
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumComRael(complex, complex);
    int sumCom(complex, complex);
};

class complex
{
    int a, b;

    // individually  decelration of function of class as friend
    //friend int cal ::sumComRael(complex, complex );
    //friend int cal ::sumCom(complex, complex);

    // aliter : decleration of the entire class of cal
    friend class cal;



public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNum()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int cal ::sumComRael(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int cal ::sumCom(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;

    o1.setNum(1, 4);
    o2.setNum(3, 2);

    cal c1;

    int res = c1.sumComRael(o1, o2);
    int res2 = c1.sumCom(o1, o2);

    cout << "the sum of the real part of the is " << res << endl;
    cout << "the sum of the complex part of the is " << res2 << endl;

    return 0;
}