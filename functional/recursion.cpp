#include<iostream>
using namespace std; 

// recursion function

int Fact(int n)
{
    if(n<=1){
        return 1;
    }

    return n* Fact(n-1);

    // its work step by step
    // Fact(4) = 4 * Fact(3)
    // Fact(4) = 4 * 3 * Fact(2)
    // Fact(4) = 4 * 3 * 2 * Fact(1)
    // Fact(4) = 4 * 3 * 2 * 1
}


int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main()
{
    int x;
    cout<<"please enter the number";
    cin>>x;


    // cout<<"factoriol of x is "<<endl<<Fact(x)<<endl;

    cout<<"fibonacc of series is at the position  "<<endl<<fib(x);




return 0;
}