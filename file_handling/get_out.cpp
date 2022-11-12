#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("type.txt", ios::in | ios::out);
    if(!file.is_open())
    {
        cout<<"error";
    }
    else
    {
        // cout<<file.tellg()<<endl; // tellg get
        // string line;
        // file.seekg(2); // starting from teaching ---> aching
        // getline(file, line);
        // cout<<line;

        // cout<<file.tellp()<<endl;
        // file << "hello dearest";     
        // cout<<file.tellp()<<endl;       // tellp (put) only works when we are using the ofstream function

        // file.seekp(5);                  // we can set the position, ios::beg, ios::in, ios::end
        // file <<" helloowwww";
        // cout<<file.tellp()<<endl;

        cout<<file.tellg()<<endl;
        cout<<file.tellp()<<endl;

        file.seekp(2);

        cout<<file.tellg()<<endl;
        cout<<file.tellp()<<endl;

    }
    return 0;
}
    
    


