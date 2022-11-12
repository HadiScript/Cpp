#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("type.txt");
    ifstream file2("type.txt");


    // using seekp() and tellp()

    // cout<<file.tellp()<<endl;
    // file << "hello hadi";
    // cout<<file.tellp()<<endl;
    // file.seekp(-5, ios::end);
    // cout<<file.tellp()<<endl;
    // file << "faiz";
    // file.seekp(0, ios::beg);
    // file<<"hello";

    // file.close();

    // string line;
    // while(file2.good()){

    // getline(file2, line);
    // cout<<line;

    // }


    // using seekg() and tellg()


    return 0;
}

// file pointers  

    // the are the outfile operators (ifstream)
        // seekp     use to move tthe pointers
        // tellp     use for tell about  current loaction of the pionter

    // input file ooperators are  (ofstream)
        // seekg     use for the reading from the specific words   
        // tellg     use for the tell about current loation   

// SYNTEX
    // pointer(o, R)
    // offset means how mmuch u want to move an pointer by byte using (- or +)
    // refrence, where you want to start it i:e ios::beg, ios::end, ios::current

