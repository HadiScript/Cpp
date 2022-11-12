//default const
//parimaterixe const;
//overloading const



#include<iostream>
using namespace std; 

class complex
{
    int a, b;

    public:
        complex(int x, int y)
        {
            a=x; b=y;
            cout<<"this is the constructor"<<endl;
        }

        complex(int k)
        {
            a = k;
            cout<<a;
        }

        complex(){a=0; b=0;}

        complex(complex &c)     // its a copy const
        {                       // agar ham yahan par & nahi lagae tou ye recursion hone lage gi or recuersion
            a  = c.a;
            b = c.b;             // or recursion cpp mei error hojata hei    
        }
};



int main()
{   
    complex a(3, 5);
    complex c1 = complex(3, 5); // both are the same

    complex a2(5);
    complex a2 = complex(5);
    complex a2 = 5;             // all are the same

    complex a3 = a;
    complex a3(a);          // both lines are the same
                            // jab class mei koi bhi const nahi hoga tou compiler 2 const banae ga    
                            //      1_ default const,   2_ copy cosnt         

                             // agar class koi const hei tou phr compiler default const nahi bnae magr
                             //  __ copy const ab bhi banaye ga
                             // jo k line 42 or 41 mei wohi banay ga

                             // agar hamene copy const bana dia tou compier phr kuch bhi nahi banae ga      
system("pause");
return 0;
}