#include <iostream>
using namespace std;

class descrypt
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
        cout<<"this is decryption :"<<endl;

        for (i = 0; (i < 100 && name[i] != '\0'); i++)
        {
            name[i] = name[i] - 2;
        }
        cout << "name ius " << name << endl;
    }
       void logic2()
    {
        cout<<"this is encryption :"<<endl;
        for (i = 0; (i < 100 && name[i] != '\0'); i++)
        {
            name[i] = name[i] + 2;
        }
        cout << "name ius " << name << endl;
    }
};

int main()
{

    descrypt s1;
    s1.geting();

    s1.logic();
    s1.logic2();

    return 0;
}
