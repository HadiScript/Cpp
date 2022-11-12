#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("type.txt");
    ofstream file2("type2.txt");

    string line;
    while (file.good())
    {
        getline(file, line);
        file2 << line << endl;
    }

    file2.close();
    file.close();

    return 0;
}