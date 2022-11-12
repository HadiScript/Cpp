#include <iostream>
using namespace std;

class lenght
{
    string str;

public:
    void setting(string str2)
    {

        str = str2;
    }

    void show()
    {
        cout << "String Length = " << str.size();
    }
};

int main()
{
    lenght s1;
    string str2;
    cout << "please enter any string which you want to raed its lenght " << endl;
    getline (cin, str2);


    s1.setting(str2);
    s1.show();

        return 0;
}