#include<iostream>
using namespace std; 

struct book
{

    private :
         int book_id;
         char name[25];
         float price;

    public:     

    void input()
    {
        cout<<"enter the book_id, its name, and its price"<<endl;
        cin>>book_id>>name>>price;
    }

    void display()
    {
        cout<<"\n"<<book_id<<" "<<name<<" "<<price;
    }
};  // we are created an group  and this is called the enapsulation


int main()
{

book b1;
b1.input();
b1.display();


return 0;
}








// // this in the C-language

// #include <iostream>
// using namespace std;

// struct book
// {
//     int book_id;
//     char name[25];
//     float price;
// };

// book input();
// void display(book);

// int main()
// {
//     book b1;
//     b1 = input();
//     display(b1);
//     return 0;
// }


// void display(book b)
// {
//     cout<<b.book_id<<"  "<<b.name<<"  "<<b.price<<endl;
// }

// book input()
// {
//     book b1;

//     cout<<"enter your book id, and its price"<<endl;
//     cin>>b1. book_id>>b1.price;

//     cout<<"enter the name of your book"<<endl;
//     cin.get(b1.name, 25);

//     return b1;
// }
