#include<iostream>
#include<conio.h>
using namespace std; 


class integer
{
    int x;

    public:
    void set_data(int a)
    {
        x = a;
    }
    void show_data()
    {
        cout<<x<<endl;
    }

    integer operator++()   // pre increament
    {
        integer i;
        i.x = ++x;  // x belongs to the i1, becouse i1 its caller object 
        
        return i;
    }

    // post increament
    integer operator++(int) 
    {                           // here (int) is just for compiler becouse its gonna pre inc, and above we defined pre inc
                               // if we dont set (int) then compiler will dont get, which member function operator 
        integer i;             // run first and then error show
       i.x=x++;
       return i;
   }
};
int main()
{
    integer i2, i1;
    i1.set_data(3);
    i1.show_data();

    i2 = ++i1;          // i2 = i1.operator++()    // its caller object is i1
    i2.show_data();
    i1.show_data();

    i2=i1++;
     i2.show_data();
    i1.show_data();    
getch();
system("pause");
return 0;
}