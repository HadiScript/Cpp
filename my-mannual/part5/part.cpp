#include <iostream>
using namespace std;

class toyota
{
    string category;
    string history;

public:
    void display_t()
    {
        cout << "hello im a display of the toyota" << endl;
        cout << "these are the categories of the toyota products" << endl;
        cout << category << endl;
        cout << history << endl;
    }

    toyota()
    {
        category = "cars, trucks, busses, rakshaws";
        history = "hello im a history";
    }
};

class vehicle : public toyota
{
    string name;
    float reg_no;
    string reg_date;
    string type;
    string engine;
    string color;
    string driver_name;

public:
    ~vehicle()
    {
        cout << "im a destructor" << endl;
    }
    void getdata()
    {
        cout << "enter the name " << endl;
        getline(cin, name);
        cout << "enter the reg number " << endl;
        cin >> reg_no;
        cout << "enter the reg date " << endl;
        getline(cin, reg_date);
        cout << "enter the type " << endl;
        getline(cin, type);
        cout << "enter the engine " << endl;
        getline(cin, engine);
        cout << "enter the color " << endl;
        getline(cin, color);
        cout << "enter the driver name " << endl;
        getline(cin, driver_name);
    }
    friend void MasterBus(vehicle);

  
};

void MasterBus(vehicle a)
{
    cout << "name of the vehicle is :" << a.name << endl;
    cout << "register number of that vehicle :" << a.reg_no << endl;
    cout << "registeration date of this vehicle :" << a.reg_date << endl;
    cout << "type of that class :" << a.type << endl;
    cout << "color of this vehicle :" << a.color << endl;
    cout << "driver name of that vehicle :" << a.driver_name << endl;
}

int main()
{
    vehicle veh;
    MasterBus(veh);
    veh.getdata();

  

    return 0;
}