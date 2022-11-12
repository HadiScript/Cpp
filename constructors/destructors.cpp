#include <iostream>
using namespace std;
// destructor never take any of the argument nor it does return any values

int count = 0;

class num
{


    public:
        num()
        {
            count++;
            cout<<"this is the time when const is called_"<<count<<endl;
        }

        ~num(){
            cout<<"this is time when my destructor in called for the object number"<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"we are inside the main func"<<endl;
    cout<<"creating first ob n1"<<endl;

    num n1;

    {
        cout<<"Entering from this block"<<endl;
        cout<<"creating to more objects"<<endl;
        num n2, n3;
        cout<<"Exiting from this block"<<endl;
    }

    cout<<"back to the main"<<endl;


    return 0;
}