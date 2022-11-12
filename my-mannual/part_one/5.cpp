#include<iostream>
using namespace std;

class sin
{
    string s1, s2;

public:
    void set()
    {
        cout<<"please enter the first string "<<endl;
        getline(cin, s1);
        cout<<"please enter the second string "<<endl;
        getline(cin, s2);
    }

    void holding()
    {
            int l = 0; //Hold length of second string
    
    //finding length of second string
    for(l = 0; s2[l] != '\0'; l++);

    int i, j;
    
    for(i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++)
    {
        if(s1[i] == s2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == l)
        cout<<"Substring found at position "<< i - j + 1;
    else
        cout<<"Substring not found";
    }


};



int main( )
{
   sin f;
   f.set();
   f.holding(); 
	
    return 0;
}