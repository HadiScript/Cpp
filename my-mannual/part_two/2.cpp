#include <iostream>
using namespace std;

class encrypt
{
    int i;
    string name;

public:
    void geting()
    {
        cout << "please enter the name :" << endl;
        getline(cin, name);
    }

    void logic()
    {
        for (i = 0; (i < 100 && name[i] != '\0'); i++)
        {
            name[i] = name[i] + 2;
        }
        cout << "name ius " << name << endl;
    }
};

int main()
{
    encrypt s1;
    s1.geting();
    s1.logic();

    return 0;
}