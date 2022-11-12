#include<iostream>
#include<string>
using namespace std; 


struct address
{
    int house_no;
    string street_no;
};

struct student
{
    string name;
    int roll_no;
    address adr;
};

int main()
{

    student h;
    h.name = "hadi";
    h.roll_no = 213;

    h.adr.house_no = 123;
    h.adr.street_no = "kia hal hein";


    cout<<h.adr.street_no<<endl;


  system("pause");
return 0;
}