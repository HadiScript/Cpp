#include <iostream>
using namespace std;

class A
{
    int size;
    int arr[];

public:
    void set()
    {
        cout << "please enter the size of an array :" << endl;
        cin >> size;

        cout << "please enter number in array : " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void searching()
    {
        cout<<"even numbers are/is"<<endl;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout<<arr[i];
            }
        }

        cout<<endl<<endl;

        cout<<"odd numbers are/is"<<endl;
             for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout<<arr[i];
            }
        }

        cout<<endl<<endl;
        cout<<"prime numbers are/is"<<endl;
        for(int i=0, j=2; i<size; j++,i++)
        {
            if(arr[i] % j == 0)
            {
                cout<<arr[i];
            }
        }
    }
};

int main()
{
    A h;
    h.set();
    h.searching();
   
}
