#include <iostream>
using namespace std;

class base
{
    int data_one; // private and its not inheritable becouse it is  an private

public:
    int data_two;

    void setdata();
    int getdata_one();
    int getdata_two();
};


void base::setdata(void)
{
    data_one = 10;
    data_two = 20;
}
int base::getdata_one()
{
    return data_one;
}
int base::getdata_two()
{
    return data_two;
}



class derived : public base
{
    int data_three;

public:
    void process();
    void display();
};

void derived :: process()
{
    data_three = data_two * getdata_one();          // 20*10
}

void derived :: display()
{
    cout<<"value of data one is  : "<<getdata_one()<<endl;
    cout<<"value of the data two is : "<<data_two<<endl;
    cout<<"value of the data three is : "<<data_three<<endl;
}

int main()
{
    derived der;

    der.setdata();
    der.process();
    der.display();

    return 0;
}