#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    void disp()
    {
        cout<<"number is :"<<a<<endl;
    }


    // number( number &obj )
    // {
    //     a = obj.a;
    //     cout<<"copy const :"<<endl;
    // }
};

int main()
{
    number x, y, z(45), z2;
    z.disp();
    x.disp();
    y.disp();

    // number z1(z);   //  line 38 same as the line 39
    number z1 = z;     // default copy const chale ga, qk "z1" is hi line pr bana hei object 
    z1.disp();

    // means agr hamne copy const nahi banaya tou compiler apna hi copy cosnt bana de ga 
    // or 38 par error nahi aye ga agar uper copy const comment hua tou
    

    z2 = x;     //  ab copy const invoke nahi hoga qk z2 object phly hi ban chuka hei agr z2 is ji line mei banta tou
                //  copy invoke ho jata    


    system("pause");
    return 0;
}