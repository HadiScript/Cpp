#include<iostream>
using namespace std; 

class library
{
    string name;
    int phone ;

public:
    addbook();
    removebook();
    addgeneral();
    removegeneral();
};

class book
{
    string name;
    int id;
    public :
    library *lib1;
    void findBook(library *lib2)
    {
        lib1 = lib2;
    };
}

class general
{
    string name;
    string author;
    int id;
    public :
    library *lib1;
    void findGeneral();
}

class member
{
    string name;
    int id;
    public :
    library *lib1;
    void issueBook();
    void returnBook();
}

class student : public member
{
    int id;
    string name;   // passing arguments as from boook as association
}
class staff : public member
{
    int id;
    string name;

    public :
    void returngeneral(); // passing arguments as from boook as association adn gernral
    void issuegeneral();
}




int main()
{



return 0;
}