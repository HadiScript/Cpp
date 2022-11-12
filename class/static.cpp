#include<iostream>
using namespace std;

class func
{
    int balance; // this is the instance member variable
    static float roi; // this is the static member variable or class variable

    public:
    void setbalance(int b)
    {
        balance = b;
    }

    // void setroi(float r)
    // { roi = r; }


    static void setroi(float r) //now its a static function member
    { roi = r; }                 // and it can just recieve the static data member
};                              // it can also call with object of the class


float func :: roi = 3.08;

int main()
{
func a1; 
// a1.setroi(3.54);  we can also access the static function member

func::setroi(245.2f);


// func::roi = 2321.12;  if it is not the private, i mean when its in public we can access like this
return 0;

}