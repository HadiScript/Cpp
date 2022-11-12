#include <iostream>
using namespace std;

class ractangle
{
    double height;
    double width;

public:
    ractangle();
    ractangle(double height, double width);

    void setheight(double);
    void setwidth(double);

    double getheight() const
    {
        return height;
    }

    double getwidht() const
    {
        return width;
    }

    double getarea() const
    {
        return height * width;
    }

    double getperimeter() const 
    {
        return (height * 2) + (width * 2);
    }
};

ractangle :: ractangle ()
{
    height = 1;
    width = 1;
}

ractangle :: ractangle(double h, double w)
{
    width = w;
    height = h;
}

void ractangle :: setheight(double h)
{
    if(h>0)
    height = h;
    else
    {
        cout<<"invalid input for the height"<<endl;
        exit(EXIT_FAILURE);
    }
    
}
void ractangle :: setwidth(double w)
{
    if(w>0)
    height = w;
    else
    {
        cout<<"invalid input for the height"<<endl;
        exit(EXIT_FAILURE);
    }
    
}

int main()
{
    double width = 0;
    double height = 0;

    do
    {
        cout<<"height ?? "<<endl;
        cin>>height;

        cout<<"widht >>"<<endl;
        cin>>width;

        ractangle rect(height, width);
        cout<<rect.getarea();
        cout<<"perimeter of the rectangle"<<rect.getperimeter();

    } while (height != 0 && width != 0);
        

    return 0;
}