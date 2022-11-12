#include <iostream>
using namespace std;

int count = 0; 

class num
{
    
    public:
        num()  
        {   count++;
            cout<<"this is the time when the const is called for the object number"<<count<<endl;
        }

        ~num()//destructor
        {
            count--;
            cout<<"***********DISTRUCTOR**************"<<count<<endl;
        }
};





int main()
{
    cout<<"we are inside the main function"<<endl;
    cout<<"we are creating an object"<<endl;
    num n1;

    {
        cout<<"entering in this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2, n3;
        cout<<"exiting to this block"<<endl;
    }

    cout<<"back to main"<<endl;
    
    system("puase");
    return 0;
}

// points
/*

1_jab ham destructor nahi banae gein tou compiler khud hi destructor banae ga 
    (anti_body destructor bnae ga means uski body mei kuch nahi hoga)

2_its invoke when the obj is going to finish    

*/    

