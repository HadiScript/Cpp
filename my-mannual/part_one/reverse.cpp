#include <iostream>
using namespace std;

class reversing
{
    string str;

public:
    void get_string()
    {
        cout << " Please enter a string " << endl;
        getline(cin, str);
        reverse(str);
    }
    void reverse(const string &a);

};

void reversing :: reverse(const string &str)
{
    size_t num = str.size();

    if (num == 1)
        cout << str << endl;
    else
    {
        cout << str[num - 1];
        reverse(str.substr(0, num - 1));
    }
}

int
main()
{
    reversing r1;
    r1.get_string();
    

    return 0;
}

