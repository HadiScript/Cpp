#include<iostream>
using namespace std; 

    //structures
    typedef struct employee
    {
        int eID; // 4
        char favChat; //1
        float salary;  //4
    } emp;
                // in the structure have used the all data type memory 

    // Union
    typedef union money
    {
        int rice ; // 4
        char car ; // 1
        float pounds; // 4
    } m ;
            // in the unoin we can only used the one data_type 
            // by using this wee can save memory  allocation


            

int main()
{
    emp harry;
    m hadi;

    hadi.rice = 12;
    hadi.car = 'd';

    cout<<hadi.car;
    cout<<hadi.rice;

    harry.eID = 1;
    harry.favChat = 'v';
    harry.salary = '1200000.00';

    cout<<"well his empolyee id is secerate we  cant suppose to tell any thing about that"<<endl;
    cout<<"his salary is"<<harry.salary<<endl<<harry.favChat;
    



return 0;
}