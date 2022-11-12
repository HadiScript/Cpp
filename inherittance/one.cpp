#include <iostream>
using namespace std;

class a
{
    int a;

    protected:
    void setvalue(int k)
    {
        a = k;
    }
};

class b : public a
{
public:
    void setdata(int x)
    {
        setvalue(x);
    }
};

int main()
{

    b ob;
    ob.setdata(3);

    return 0;
}