#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;

    file.open("type.txt");
    if (!file.is_open())
    {
        cout << "un able to opening this file";
    }

    else
    {

        cout << "reading from this file"<<endl;
        string line;
        while (file.good())
        {
            getline(file, line);
            cout << line << endl;
        }
    }

    return 0;
}

// by using this good() method we can read it line by line as we type in the file