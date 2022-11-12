#include <iostream>
using namespace std;

class char_array
{
    char str[3][3];
    public :
    void displaying();
    void getting();

};

void char_array :: getting()
{
    cout<<"enter in array :"<<endl;
    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            cin>>str[i][j];
        }
    }
}

void char_array :: displaying()
{
    cout<<"2d char array :"<<endl;
        for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
             cout<<str[i][j];
        }
        cout<<endl;
    }
}




int main()
{
    char_array arr;
    arr.getting();
    arr.displaying();
    return 0;
    system("pause");
}