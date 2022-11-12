// __banana is a fruit

//         __rectangle is a
//         quadrilatoral(four sides)

//             {
//                 ractangel is quaderatral but quad is not a rectangle
//             }

//     * Associations
//     _aggregation
//     _composition
//     _inheritance(is a relationship)

//         inheritance :
//     // in which having parent class and the base class

//     banana is a fruit
//     fruit is a parent(fruit mei zayada catagories hein) class,
//     while banaa is child class

//     ** is a relation is always implement the as a public inheritance

//    *** _but why ?
//    *** _when to use private and public inheritane ?

// *****************************************************************************************

//     _but why ?

// #include <iostream>
// using namespace std;

// class car
// {
//     int gear;

// public:
//     void increament_gear()
//     {
//         if (gear < 5){
//             gear ++;
//         }
//     }
// };

// // let suppose we need to make an sport car :
// // sport car is a car

// class sport_car : public car
// {

// };

// int main()
// {

//     return 0;
// }

//************************************

// when we use the private and protected
#include <iostream>
using namespace std;

class array
{
    int a[10];

public:
    void insert(int index, int value)
    {
        a[index] = value;
    }
};


class STACK : private array
{
    int top;
    public : 
        void push(int value)
        {
            insert(top, value);
        }
};

int
main()
{

    STACK s1;
    s1.push(23);

    return 0;
}