#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file("type2.txt", ios::in | ios::out | ios::app);

    if (!file.is_open())
    {
        cout << "error to opening this file";
    }
    else
    {
        cout << "file is open __" << endl;
        cout << "wrting to the file" << endl;

        file << "Lorem ipsum dolor sit amet, consectetur adipiscing elit."<<endl;
        file <<"Ut sed massa erat.Sed quam mauris,"<<endl;
        file << "iaculis cursus nibh.Morbi vel ligula massa.Aenean eget lor"<<endl;

        file.seekg(0);
        cout<<"reading of the file";
        string line;
        while (file.good())
        {
            getline(file, line);
            cout<<line<<endl;
        }
        

       
    }

    return 0;
}

// ios::app :-
//          by using this function, file will be created if there is no anny file of the same name, actually this function
//          is help us to avoid the use less error

// ham jitni martaba is code ko run kre gein yw utni dafa hi create ya write kre ga file ko means hamay file me
// lines ziyada hi milay gi
