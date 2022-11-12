// #include <iostream>
// using namespace std;

// class managment
// {
// private:
//     int x;
//     string name, fname, sub;

//     int roll_nummber[11];
//     char attandance[11];

// public:
//     void registration();
//     void attendance();
//     void data();
//     void switching();
// };

// void managment ::registration()
// {
//     cout << "registration :: " << endl;

//     cout << "enter your name :" << endl;
//     cin >> name;
//     cout << "enter your father name  :" << endl;
//     cin >> fname;
//     cout << "enter your subjects :" << endl;
//     cin >> sub;

//     if (name.size() != 0 && name.size() > 3)
//     {
//         cout << "you have been inrolled in your institute : " << endl;
//     }

//     int size = sizeof(roll_nummber);
//     cout << "your roll number is : " << size;
//     roll_nummber[size] = roll_nummber[size];
// }

// void managment ::attendance()
// {
//     cout << "attendance :: " << endl;

//     cout << "please enter the roll number of the students : " << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> roll_nummber[i];
//     }

//     cout << "press P fot the present : " << endl;
//     cout << "press A fot the abbsent : " << endl;

//     for (int j = 0; j < 10; j++)
//     {
//         cout << "roll # " << roll_nummber[j] << "is";
//         cin >> attandance[j];

//         if (attandance[j] != 'P' || attandance[j] != 'A' || attandance[j] != 'p' || attandance[j] != 'a')
//         {
//             cout << "you can just type 'p' for present 'a' for absent  " << endl
//                  << endl;
//             cout << "please do not type anyother charactor" << endl;
//         }
//     }
// }

// void managment ::data()
// {
//     cout << "this is the data this day : " << endl;

//     for (int i = 0; i < 10; i++)
//     {
//         cout << "roll # " << roll_nummber[i] << " "
//              << " is "
//              << " " << attandance[i] << endl;
//     }
// }

// void managment ::switching()
// {
//     cout << "1_ REGIRSTRETION" << endl;
//     cout << "2_ ATTENDANCE" << endl;
//     int num;
//     cin >> num;

//     switch (num)
//     {
//     case 1:
//         cout << "1_ for registration :" << endl;
//         registration();
//         break;

//     case 2:
//         cout << "2_ for attendance :" << endl;
//         attendance();
//         data();
//         break;

//     default:
//         cout << "please choose from 1 and 2  :" << endl;
//         break;
//     }
// }

// int main()
// {
// 	start:

//     string passward;
//     string passward2;
//     passward2="mazhar";

//     cout<<"wellcome to the school management software..."<<endl<<endl;
//     cout << "enter the passward for starting... " << endl;
//     getline(cin, passward);

//     if (passward == passward2)
//     {
//         managment m1;
//         m1.switching();
//     }

//     else
//     {
//         cout << "check your passward" << endl;
//     }
//     goto start;

//     system("pause");
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"please enter the any number: "<<endl;
    cin >> n;

    for(int j=0; j<=n; j++)
    {
        if(n/j = 0)
        {



    }
    return 0;
}