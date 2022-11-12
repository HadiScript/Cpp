#include<iostream>
#include <fstream> //when we are using fstream file, there si  no need to type an iostream
#include <conio.h>
using namespace std;

int main()
{
    ifstream file("type.txt", ios::in);
    int i = 0;
    // char ch;                       // its not use for the getline function
    // char ch[15];                    // for the obj function reading, its not use for the getline function
    string ch;
    while (file.good())
    {

        // read ch by ch______
        // file.get(ch);                      //get charactor by charactor reading from the file
        // ch = file.get()                  //same as above
        // cout << ch;
        // i++;
        

        // read by obj mehtod______
        // file>>ch;                      // it will read data without spacing 
        // cout<<ch<<" ";                 // by using this method we can create space between the worlds
        


        // read by getline______
        // getline(file, ch, 'h');             // by using 3rd parameter we can shi that particuler charactor 
        // cout<<ch;

        // read(file, ch);            // not sure about that so ask this to the ma,am
        // cout<<ch;


    }
    cout << " number of characotr "<<i;

        return 0;
}