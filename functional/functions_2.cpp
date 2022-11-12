#include <iostream>
using namespace std;

// int sum(int a, int b) { return a * b; }

// with staticc variable
// int sumStatic(int a, int b)
// {
//     static int c = 0; //  this line execute just only once
//     c = c + 1;
//     return a * b+c;
// } // jab compilar dobarar  yahan aye ga tou c=0 wali line axecute nahi hogi ab c = 1 us k bad c = 2



// for the DEfault arguments
float money(int current, float factor  = 1.3){  // def arguments bad me likhe jate hein
    return current * factor;
}

// for the contacts
int contantsFunc(const char* p){
    cout<<"this is the constat ";
}

int main()
{
    int a, b;
    // cout << "enter the value of the a nd b";
    // cin >> a >> b;

    // cout << "sum is" << sum(a, b)<<endl;

    // cout<<" sum static" << sumStatic(a, b)<<endl;
    // cout<<" sum static" << sumStatic(a, b)<<endl;
    // cout<<" sum static" << sumStatic(a, b)<<endl;

    int x = 10000;
    cout<<"if you have this type of figure"<<x<<"then you will get interst"<<money(x)<<endl;
    cout<<"if you you are member of the bankk"<<x<<"then you will get interst"<<money(x, 1.78)<<endl;




    return 0;
}