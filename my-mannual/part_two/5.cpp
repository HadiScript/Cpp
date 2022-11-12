#include <iostream>
using namespace std;

class program_five
{
    int choice;
    int n = 10;
    int *p;

public:
    program_five()
    {
        p = new int[n];
    }
    ~program_five()
    {
        delete[] p;
    }
    void manu_bar();
    void accepting();
    void displaying();
    void sorting();
    void searching();
};

void program_five::searching()
{
    int i;
    int x;
    cout << "Enter a number to serach in Array\n";
    cin >> x;

    for (i = 0; i < n; i++)
    {
        if (p[i] == x)
        {
            cout << "Element found at index " << i;
            break;
        }
    }

    if (i == n)
    {
        cout << "Element Not Present in Input Array\n";
    }
}

void program_five ::manu_bar()
{

    do
    {
        cout << endl << "MENU" << endl << endl;
        cout << "1. Accept elements of array" << endl;
        cout << "2. Display elements of array" << endl;
        cout << "3. Sort the array using bubble sort method" << endl;
        cout << "4. search" << endl;
        cout << "5. Exit" << endl;

        cout << endl
             << "Enter your choice 1-5 :" << endl
             << endl;
        cin >> choice;

        switch (choice)

        {

        case 1:

            accepting();

            break;

        case 2:
            displaying();

            break;

        case 3:
            sorting();

            break;

        case 4:
            searching();
            break;

        case 5:
            break;

        default:
            cout << "\nInvalid choice";
        }
    } while (choice != 6);
}

void program_five ::accepting()
{
    for (int I = 0; I < n; I++)
    {
        cout << "Enter element " << I + 1 << ":";
        cin >> p[I];
    }
}

void program_five ::displaying()
{
    cout << "The elements of the array are:\n";
    for (int i = 0; i < n; i++)
        cout << p[i] << " ";
}

void program_five ::sorting()
{
    cout << " sorted array : ";
    int i, j, Temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
            if (p[j] > p[j + 1])
            {
                Temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = Temp;
            }
        cout << " " << p[j];
    }
}

int main()
{
    
    program_five p1;

    p1.manu_bar();
    p1.accepting();
    p1.displaying();
    p1.sorting();
    p1.searching();

    return 0;
    system("pause");
}
