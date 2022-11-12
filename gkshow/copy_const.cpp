#include<iostream>
using namespace std;

class stu
{
    int roll;
    int marks;

public:
    stu(int m, int n)
    {
        roll = m;
        marks = n;
    }

    stu(stu &t);
    void show()
    {
        cout<<"roll :"<<roll<<endl;
        cout<<"marks :"<<marks<<endl;
    }

};

stu :: stu(stu &t)
{
    roll = t.roll;
    marks = t.marks;
}

int main()
{
    stu r(22, 234);
    r.show();

    cout<<"*****COPY CONSTRUCTOR******"<<endl;

    stu c(r);
    c.show();
}