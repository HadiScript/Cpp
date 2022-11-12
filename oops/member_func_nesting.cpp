#include <iostream>
#include <cstring>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void once_compliments(void);
    void disp(void);
};

void binary ::read(void)
{
    cout << "enter the binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format";
            exit(0);
        }
    }
}

void binary ::once_compliments(void)
{
    chk_bin(); // nested the member functions ( now we cant access it, its become an private function)


    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::disp(void)
{
    cout<<"dispalying the docs"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    // nesting of the member function
    binary b;
    b.read();
    b.disp();
    b.once_compliments();
    b.disp();


    return 0;
}