#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("type.txt", ios::out);

    if(!file.is_open())
    {
        cout<<"error";
    }
    else
    {
        file << "hi"<<endl;
        file<<"hello"<<endl;
        file<<"how are you"<<endl;

        file.close();
    }

    ofstream file2("type2.txt", ios::out);
    if(!file2.is_open())
    {
        cout<<"error";
    }
    else
    {
        file2 << "hi2"<<endl;
        file2<<"hello2"<<endl;
        file2<<"how are you2"<<endl;

        file2.close();
    };

    ifstream file3("type2.txt", ios::in);
    string line;
    while (file3.good())
    {
        getline(file3, line);
        cout<<line<<endl;
    }
    


    return 0;
}