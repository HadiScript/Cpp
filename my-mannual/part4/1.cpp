#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
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
    void getdata();
    void display();
    void add_Data();
    void del_Data();
    void modify_data();
    void display_all();
    float get_reg_no() { return reg_no; }
} veh;

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
    char opt;
    do
    {
        int op;
        cout << "\t\t\tMain Menu" << endl;
        cout << "\n\t\t\t1. Add new record" << endl;
        cout << "\t\t\t2. Delete record" << endl;
        cout << "\t\t\t3. Modify record" << endl;
        cout << "\t\t\t4. Display All" << endl;
        cout << "\t\t\tEnter Choice : ";
        cin >> op;
        switch (op)
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
        }
        cout << "Do you want to continue (y/n) : ";
        cin >> opt;
    } while (opt == 'Y' || opt == 'y');
}