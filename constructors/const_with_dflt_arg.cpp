#include <iostream>
using namespace std;

class simple
{

    int data;
    int data1;

public:
    simple(int a, int b = 9)
    {
        data = a;
        data1 = b;
    }

    void printData();
};

void simple ::printData()
{
    cout << " the value of data is " << data << " & " << data1<<endl;
}

int main()
{
    simple s(2, 4);
    s.printData();

    simple s1(2);
    s1.printData();

    return 0;
}