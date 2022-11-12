#include <iostream>
using namespace std;


// parent class -------------

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "roll number is : " << roll_number << endl;
}


// first child class ---------------
/*  
    its belong to the class student

*/ 


class exams : public student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exams ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exams ::get_marks()
{
    cout << "the marks of maths is  : " << maths << endl;
    cout << "the marks of physics is  : " << physics << endl;
}





// second child class ------------------------------
/*  
    its belong to the class first child

*/ 
class result : public exams
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();      

        cout << " your percentage is : " << (maths + physics) / 2<<"%" <<endl;
    }


};






// main function
int main()
{
    result hadi;
    hadi.set_roll_number( 420 );
    hadi.set_marks( 90, 94 );
    hadi.display();

    return 0;
}