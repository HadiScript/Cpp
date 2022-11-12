#include<iostream>
using namespace std;

int main(){

    // pointers _____________

    // int a=13;
    // int * b = &a;
    // cout << b; // both are the same
    // cout << &a; // both are the same gving us the adress of the variable

    // // * derefrencing variable

    // cout << *b;  //  --> it will give us the value of that variable whose address is in the variable of b 


    // // pointer to pointer

    // int **c = &b; //  c is taking the adrress of another variable

    // cout<<c;
    // cout<<&b;     // both give us the address of the  b

    // cout<<*c;          // actually its give us the value of * b 
    // cout<<**c;        // actually  is giving ud the value  a


    // arrray_________________________

    // int marks[4] = { 4,33,24,53 };
    // cout<<marks[2];

    // for(int i=0; i <= 4; i++ ){ cout<<marks[i]<<endl; }



    // pointers to array ____________________

    int marks[] = {12, 32, 43, 54, 65, 76, 87, 9};
    int *x = marks;
    
    cout<<*x<<endl; // it gives us the value of the "" marks[0] ""index;  by default
    cout<<*(x+1)<<endl;
    cout<<*(x+2)<<endl;
    cout<<*(x+3)<<endl;
    cout<<*(x+4)<<endl;
    cout<<*(x+5)<<endl;
    



    return 0;
}