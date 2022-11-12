#include<iostream>
using namespace std; 

class polygon
{
    protected :
    int height, weight;
    public :
    void setdata(int a, int b)
    {
        height = a;
        weight = b;
    }

    virtual int area(void) = 0;
};

class rectangle : public polygon
{
    public :
    int area()
    {
        return height*weight ;
    }
};
class triangle : public polygon
{
    public :
    int area()
    {
        return height*weight ;
    }
};



int main()
{

    polygon *p1 = new rectangle;
    polygon *p2 = new triangle;
    p1->setdata(3,4);
    p2->setdata(4,5);
    cout<<p1->area();
    cout<<p2->area();

    delete p1;
    delete p2;

    system("pause");
    return 0;
}