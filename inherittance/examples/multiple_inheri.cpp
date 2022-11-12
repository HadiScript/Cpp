// headers
#include <iostream>
using namespace std;

// multiples classes
// path :
/*
        
        
        
        */

class base_one
{
protected:
    int base_one;

public:
    void get_base_one(int a)
    {
        base_one = a;
    }
};

class base_two
{
protected:
    int base_two;

public:
    void get_base_one(int a)
    {
        base_two = a;
    }
};

class derived : public base_one, public base_two
{
    public :
        void show()
        {
            cout<<"the value of the base_one is  : "<<base_one<<endl;
            cout<<"the value of the base_two is  : "<<base_two<<endl;


            cout<<"the value of sum of these are is  : "<<(base_one + base_two)<<endl;
        }
};

// main function
int
main()
{

    return 0;
}