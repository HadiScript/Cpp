#include <iostream>
#include<conio.h>
using namespace std;

class bank
{
    char full_name[25], address[50], y;
    int balance;

public:
    void open_acc();
    void deposit_cash();
    void withdraw_cash();
    void display_acc();
};

void bank ::open_acc()
{
    cout << "enter your full name :" << endl;
    cin.ignore();
    cin.getline(full_name, 25);

    cout << "enter your address :" << endl;
    cin.ignore();
    cin.getline(address, 50);

    cout << "what type od acount you want to open" << endl;
    cout << "current (c) and saving (s)" << endl;
    cin >> y;

    cout << "enter ammount for the deposite" << endl;
    cin >> balance;

    cout << "your account has been successfully created" << endl;
}

void bank ::deposit_cash()
{
    int a;
    cout << "how much to want to deposite cash :" << endl;
    cin >> a;

    balance += a;

    cout << "now your balance is" << balance << endl;
}

void bank ::display_acc()
{
    cout << "wellcome  : " << full_name << endl;
    cout << "your address is : " << address << endl;
    cout << "type of account that you want to open  :" << y << endl;
    cout << "ammount which is deposite  :" << balance << endl;
}

void bank ::withdraw_cash()
{
    float amount;
    cout << "withdraw" << endl;
    cout << "enter the withdraw amount" << endl;
    cin >> amount;

    balance -= amount;
    cout << "now your balance is :" << balance << endl;
}

int main()
{

    bank obj;
    int ch, x;
    do
    {
        cout << "open_acc" << endl;
        cout << "deposite cash " << endl;
        cout << "cash withdraw" << endl;
        cout << "display account" << endl;
        cout << "Exit" << endl;
        cout << endl;
        cout << endl;

        cout << "please select one which you want to do" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << " 1) open the bank account" << endl;
            obj.open_acc();
            break;

        case 2:
            cout << "deposite cash " << endl;
            obj.deposit_cash();
            break;

        case 3:
            cout << " 3) withdraw cash" << endl;
            obj.withdraw_cash();
            break;

        case 4:
            cout << "display account" << endl;
            obj.display_acc();
            break;

        case 5:
            if (ch == 5)
            {
                exit(1);
            }

        default:
            cout << "this not exist chose from 1_to_5";
        }

        cout << "for next option press 'Y' " << endl;
        cout << "for exit press 'N' " << endl;
        x = getch();

        if (x == 'y' || x == 'n')
            exit(0);
    } while (x=='y' || x=='Y');

    getch();

    return 0;
}


