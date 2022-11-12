#include <iostream>
using namespace std;

int main()
{

    int n, i;
    float *p, total = 0;

    cout << "enter the number of the subjects" << endl;
    cin >> n;

    p = new float[n]; // memory allocation

    cout << "please enter the marks of these subject" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "subjects" << (i + 1) << endl;
        cin >> p[i]; // subscript method
    }

    cout << "marks" << endl;
    for (i = 0; i < n; i++)
    {
        cout<<"subjects "<<(i+1)<<endl;
        cout<<*(p+1)<<endl; // obset notation
        total += *(p+i);
    }

    cout<<"total "<<total<<endl;

    delete[]p;

    return 0;
}

/*

*************NEW OPERATOR************** 
USING FOR THE ALLOCATION
    pointer = new int; --> new int return the address so it neccassry to  store it in the pointer so...
    

    int *p;
    p = new int; --> to accesss the that location  of the memory we can use the pointer "p".
    
    using __
    *p = 100;
    cout<<"the values of this is the"<<" "<<*p;

    FOR THE ARRAY__   

    new int[4];

    syntax  and using __
    pointer = new type[size];
    int *p;
    p = new int[4];

    using__
    int *p = new int[5];

    for(int i=0; i<5; i++)
    {
        p[i] = 0;            // pointer subscipt method
        *(p + i) = 0;        // this is --> pointer obset notation 
                             // both are the same 
    }


    ***********DELETE OPERTATE**************
    using for the de_alocation
    
    for single vairable___

    int *p = new int;   //   allocation
    delete p;           // de_alocation


    for array__

    int * p = new int [5];
    delete[]p;


*/