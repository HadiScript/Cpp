#include<iostream>
int sum(int, int);  // prototype
// void g() same as bellow
void g (void);
using namespace std; 


void swap(int* a, int* b){

    int temp = *a; 
    *a = *b;
    *b = temp; 

    // cout<<"the value od x is "<<a<<endl<<"the value of the y is "<< b<<endl;


    // becouse this func is not work for the actual parameter
    // i meant to say__ this function cant be work for the x and y;
    // its work only for the a and b 

    // to solve this propblem we can pass a pointer becouse memory address cant be change

}


// using reference_variable
void swapRefVar(int & a, int & b){

    int temp = a; 
    a = b;
    b = temp; 
}


int main()
{
    int x = 123;
    int y = 12;

    cout<<sum(x,y);
    // x and y are actuall parrameters

    g();

    cout<<"the value od x is "<<x<<endl<<"the value of the y is "<< y<<endl;

    swap(&x, &y); // this is called the call_by refrence
   
    cout<<"the value od x is "<<x<<endl<<"the value of the y is "<< y<<endl;


    cout<<"this is the call by refrencer variable below";
    swapRefVar(x, y);
    cout<<"the value od x is "<<x<<endl<<"the value of the y is "<< y<<endl;





return 0;
}

// a and b is the formal parameters
int sum(int a, int b){
    int c = a+b;
    return c;
} // if this function is type on the above of the int main then its not need to the porototype  



void g(){
    cout<<"helllo, good morning sir";
}