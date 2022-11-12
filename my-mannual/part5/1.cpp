#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;


class BUS
{
    public :
    int busnumber;
    string color;
    string model;

    BUS(int numbers = 0, string colors = "", string models = "")
    {
        busnumber = numbers;
        color = colors;
        model = models;
    }

    void data()
    {
        cout<<"enter the bus number :"<<endl;
        cin>>busnumber;
        cout<<"enter bus color :"<<endl;
        getline(cin, color);
        cout<<"enter the bus model :"<<endl;
        getline(cin, model);
    }
};
class TRUCK
{
    public :
    int t_number;
    string t_color;
    string t_model;

    TRUCK(int numbers = 0, string colors = "", string models = "")
    {
        t_number = numbers;
        t_color = colors;
        t_model = models;
    }

    void data()
    {
        cout<<"enter the bus number :"<<endl;
        cin>>t_number;
        cout<<"enter bus color :"<<endl;
        getline(cin, t_color);
        cout<<"enter the bus model :"<<endl;
        getline(cin, t_model);
    }
};
class CAR
{
    public :
    int carnumber;
    string car_color;
    string car_model;

    CAR(int numbers = 0, string colors = "", string models = "")
    {
        carnumber = numbers;
        car_color = colors;
        car_model = models;
    }

    void data()
    {
        cout<<"enter the bus number :"<<endl;
        cin>>carnumber;
        cout<<"enter bus color :"<<endl;
        getline(cin, car_color);
        cout<<"enter the bus model :"<<endl;
        getline(cin, car_model);
    }
};



//  CLASS VEHICLE
class vehicle
{
    string name;
    float reg_no;
    string reg_date;
    string type;
    string engine;
    string color;
    string driver_name;

public:
    vehicle(string n, float regnum, string regdate, string ty, string eng, string col, string d_name)
    {
        name = n;
        reg_no = regnum;
        reg_date = regdate;
        type = ty;
        engine = eng;
        color = col;
        driver_name = d_name;
    }
    vehicle( vehicle &obj )
    {
        name = obj.name;
        reg_no = obj.reg_no;
        reg_date = obj.reg_date;
        type = obj.type;
        engine = obj.engine;
        color = obj.color;
        driver_name = obj.driver_name;
    }
    ~vehicle() { cout << "im destructor"; }

    void getdata();
    void display();
    void add_Data();
    void del_Data();
    void modify_data();
    void display_all();
    float get_reg_no() { return reg_no; }
    friend void MasterBus(vehicle);

    // objects
    BUS b; 
    TRUCK t;
    CAR c;
 

    void menu()
    {
        int v_num;
        cout << "enter for choose in these :" << endl;
        cout << "\n\t\t\t1. Add new record" << endl;
        cout << "\t\t\t2. Delete record" << endl;
        cout << "\t\t\t3. Modify record" << endl;
        cout << "\t\t\t4. Display All" << endl;

        switch (v_num)
        {
        case 1:
            veh.add_Data();
            break;
        case 2:
            veh.del_Data();
            break;
        case 3:
            veh.modify_data();
            break;
        case 4:
            veh.display_all();
        default:
            break;
        }
    }

} veh;

//  class TOYOTA
class Toyota : public vehicle
{
    void menu();

public:
    Toyota();
    void featured();
    void car_info();
    void info();
};


// these are all using in the toyota class and these havnot any object in the main function;


//  member functions functions

void Toyota ::menu()
{
    int number;
    cout << "press 2 : (for the information about TOYOTA company) :" << endl;
    cout << "press 3 : (for the car information) :" << endl;
    cout << "press 4 : (for featured) :" << endl;

    switch (number)
    {
    case 1:
        info();
        break;

    case 2:
        car_info();
        break;

    case 3:
        featured();
        break;
    case 4:

    default:
        break;
    }
}

void Toyota ::info()
{
    cout << "Toyota is the global market leader in sales of hybrid electric vehicles," << endl
         << "and one of the largest companies to encourage the mass-market adoption of hybrid vehicles across the globe...."
         << endl
         << "The company was founded by Kiichiro Toyoda in 1937,"
         << endl
         << "as a spinoff from his father's company Toyota Industries, to manufacture automobiles.";
}

void Toyota ::car_info()
{
    cout << "TOYOTA providing you these cars with great features :" << endl;
    cout << endl;
    cout << "Altis Grande Starting from PKR. 3,485,000 /-" << endl;
    cout << "Altis 1.6Starting from PKR. 3,165,000/-" << endl;
    cout << "PriusStarting from PKR. 9,276,500 /-" << endl;
    cout << "Yaris 1.5Starting from PKR. 2,655,000/-" << endl;
    cout << "CamryStarting from PKR. 16,058,500 /-" << endl;
    cout << "AvanzaStarting from PKR. 5,796,000 /" << endl;
}

void Toyota ::featured()
{
    cout << "All 2020 Corollas get automatic emergency braking, active lane control, " << endl;
    cout << "and adaptive cruise control, but blind-spot monitors are less widely available." << endl;
    cout << "Every 2020 Corolla sedan has LED headlights," << endl;
    cout << "touchscreen infotainment with Apple CarPlay compatibility and power features" << endl;
}

// TASK # 4 (friend function)
void MasterBus(vehicle a)
{
    cout << "name of the vehicle is :" << a.name << endl;
    cout << "register number of that vehicle :" << a.reg_no;
    cout << "registeration date of this vehicle :" << a.reg_date;
    cout << "type of that class :" << a.type;
    cout << "color of this vehicle :" << a.color;
    cout << "driver name of that vehicle :" << a.driver_name;
}

void vehicle::getdata()
{
    cout << "Enter vehicle name      : ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter vehicle number    : ";
    cin >> reg_no;
    cout << "Enter registration date : ";
    cin.ignore();
    getline(cin, reg_date);
    cout << "Enter vehicle type      : ";
    getline(cin, type);
    cout << "Enter vehicle engine    : ";
    getline(cin, engine);
    cout << "Enter vehicle color     : ";
    getline(cin, color);
    cout << "Enter driver name       : ";
    getline(cin, driver_name);
}

void vehicle::add_Data()
{
    ofstream fout;
    fout.open("Vehicles.dat", ios::binary | ios::out | ios::app);
    veh.getdata();
    fout.write((char *)&veh, sizeof(vehicle));
    fout.close();
    cout << "Record has been created.....";
    getch();
}

void vehicle::display()
{
    cout << "Vehicle name      : " << name << endl;
    cout << "Vehicle number    : " << reg_no << endl;
    cout << "Registration date : " << reg_date << endl;
    cout << "Vehicle type      : " << type << endl;
    cout << "Vehicle engine    : " << engine << endl;
    cout << "Vehicle color     : " << color << endl;
    cout << "Driver name       : " << driver_name << endl;
}

void vehicle::display_all()
{
    ifstream fin;
    fin.open("Vehicles.dat", ios::in | ios::binary);
    while (fin.read((char *)&veh, sizeof(vehicle)))
    {
        veh.display();
    }
    fin.close();
    cout << "\n\n\t\tData Reading from File Successfully Done....\n";
}

void vehicle::del_Data()
{
    int n, flag = 0;
    ifstream fin;
    ofstream fout, tout;

    fin.open("Vehicles.dat", ios::in | ios::binary);
    fout.open("Temp.dat", ios::out | ios::app | ios::binary);
    tout.open("Vehicles Trash.dat", ios::out | ios::app | ios::binary);

    cout << "\n\t\tEnter Vehicle Number to be Recycled : ";
    cin >> n;

    while (fin.read((char *)&veh, sizeof(vehicle)))
    {
        if (n == veh.get_reg_no())
        {
            cout << "\n\t\tThe Vehicle Number " << n << " has been moved to Trash....\n";
            veh.display();
            tout.write((char *)&veh, sizeof(vehicle));
            flag++;
        }
        else
        {
            fout.write((char *)&veh, sizeof(vehicle));
        }
    }
    fout.close();
    tout.close();
    fin.close();
    if (flag == 0)
        cout << "\n\t\tThe Vehicle Number " << n << " not found....\n";
    remove("Vehicles.dat");
    rename("Temp.dat", "Vehicles.dat");
}

void vehicle::modify_data()
{
    int n, flag = 0, pos;
    fstream fio;

    fio.open("Vehicles.dat", ios::in | ios::out | ios::binary);
    cout << "\n\t\tEnter Vehicle Number to be Modified : ";
    cin >> n;

    while (fio.read((char *)&veh, sizeof(vehicle)))
    {
        pos = fio.tellg();
        if (n == veh.get_reg_no())
        {
            cout << "\n\t\tThe Vehicle Number " << n << " will be modified with new data....\n";
            veh.display();
            cout << "\n\t\tEnter the New Details....\n";
            veh.getdata();
            fio.seekg(pos - sizeof(veh));
            fio.write((char *)&veh, sizeof(vehicle));
            flag++;
        }
    }
    fio.close();

    if (flag == 0)
        cout << "\n\t\tThe Vehicle Number " << n << " not found....\n\n";
}

int main()
{
    string name;
    float regNum;
    string redDate;
    string type; 
    string engine;
    string color;
    string driver;
    cout<<"enter the vehicle name :"<<endl;
    getline(cin, name);
    cout<<"enter number :"<<endl;
    cin>>regNum;
    cout<<"enter registration date :"<<endl;
    getline(cin, redDate);
    cout<<"enter the engin number :"<<endl;
    getline(cin, engine);
    cout<<"enter vehicle color :"<<endl;
    getline(cin, color);
    cout<<"enter the driver name :"<<endl;
    getline(cin, driver);
    vehicle veh(name, regNum, redDate, type, engine, color, driver);
    vehicle v1 = veh;
    veh.menu();
    veh.b.data();
    veh.c.data();
    veh.t.data();
    system("pause");
}

