#include <iostream>
using namespace std;

class program_five
{
	int choice;

public:

	void manu_bar( int Arr[], int s  );
	void accepting(int Arr[], int s);
	void displaying(int Arr[], int s);
	void sorting(int Arr[], int s);
	void searching(int Arr[], int n);
};

void program_five::searching(int Arr[], int n)
{
	int i;
	int x;
	cout << "Enter a number to serach in Array\n";
    cin >> x;
      
   
    for(i = 0; i < n; i++){
        if(Arr[i] == x){
            cout << "Element found at index " << i;
            break;
        }
    }
      
    if(i == n){
        cout  << "Element Not Present in Input Array\n";
    }
}

void program_five :: manu_bar(int Arr[], int n)
{
		do
	{
		cout <<endl<< "MENU" <<endl<<endl;
		cout << "1. Accept elements of array"<<endl;
		cout << "2. Display elements of array"<<endl;
		cout << "3. Sort the array using bubble sort method"<<endl;
		cout << "4. search"<<endl;
		cout << "5. Exit"<<endl;

		cout <<endl<< "Enter your choice 1-5 :"<<endl<<endl;
		cin >> choice;

		switch (choice)

		{

		case 1:
			accepting(Arr, n);

			break;

		case 2:
			displaying(Arr, n);

			break;

		case 3:
			sorting(Arr, n);

			break;

		case 4 :
		searching(Arr, n);
		break;		

		case 5:
			break;

		default:
			cout << "\nInvalid choice";
		}
	} while (choice != 6);
}


void program_five :: accepting(int Arr[], int s)
{
	for (int I = 0; I < s; I++)
	{
		cout << "Enter element " << I + 1 << ":";
		cin >> Arr[I];
	}
}

void program_five :: displaying(int Arr[], int s)
{
	cout << "The elements of the array are:\n";
	for (int i = 0; i < s; i++)
		cout << Arr[i] << " ";
}

void program_five :: sorting(int Arr[], int s)
{
	cout<<" sorted array : ";
	int i, j, Temp;
	for (i = 0; i < s - 1; i++)
	{
		for (j = 0; j < (s - 1 - i); j++)
			if (Arr[j] > Arr[j + 1])
			{
				Temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = Temp;
			}
	cout<<" "<<Arr[j];
	}
}

int main()
{
	int Arr[100], n;
	program_five p1;
	

	cout<<"enter the size of an array :"<<endl;
	cin >> n;


	p1.manu_bar(Arr, n);
	p1.accepting(Arr, n);
	p1.displaying(Arr, n);
	p1.sorting(Arr, n);
	p1.searching(Arr, n);

	return 0;
	system("pause");
}
