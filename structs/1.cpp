#include <iostream>
#include<cstring>
using namespace std;

struct book
{
    int book_id;
    char name[25];
    float price;
};

int main()
{
    book b1 = {100, "c++ by hadi", 12.3};
    book b2, b3;
    b2.book_id = 200;


    strcpy(b2.name,"im hadi raza");
    b2.price = 13.2;

    b2 = b3;  // becouse both are same type

    // charactor array mei ham directly string assign nahi kar sakte hien is lei
    // ham strcpy ka use kre gein

    return 0;
}