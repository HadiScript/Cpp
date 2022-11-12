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
    rectangle react;
    triangle tri;
    polygon *p1 = &react;
    polygon *p2 = &tri;
    p1->setdata(3,4);
    p2->setdata(4,5);
    cout<<p1->area();
    cout<<p2->area();



return 0;
}