#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file ("type.txt");

    if(!file.is_open())
    {
        cout<<"un able to open this file";
    }
    else
    {
        file << "teaching"<<endl;
        file << "enjoy!!"<<endl;
        file << "mobile"<<endl;

        file.close();

        cout<<"successfully file is created so open ti check it out";
    }
    

    return 0;
}