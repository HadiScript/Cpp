#include <iostream>
using namespace std;



class empl
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout<<"id .. ?";
        cin>>id;
        count++;
    }

    void getData(void)
    {
        cout<<"the id of this empl is"<<id<<"and this is the number of the count"<<count<<endl;
    }

    static void get_count(void)
    {
        // cout<<id; --> throw an error
        cout<<"the number of the count is"<<count<<endl;
    }

};

int empl :: count = 1000;  // static variable, it is set by default to ZERO, is variable ko saray object share karein gein
                        // if i wanted initialize the static variable then we initialize here 
                        // this is the static data member of the empl




main()
{
    empl harry, deny, ried;
    harry.setData();
    harry.getData();
    empl::get_count();


    deny.setData();
    deny.getData();
    empl::get_count();

    ried.setData();
    ried.getData();
    empl::get_count();
    return 0;
}