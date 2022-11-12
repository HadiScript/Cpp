#include<iostream>
#include<deque>
using namespace std; 

class player
{

    public:
        int x, y;
        player(int width)
        {
            x = width / 2;
            y = 0;
        }


};


class lane
{
    deque<bool> cars;
    public : 
    lane(int width)
    {
        for(int i=0; i < width; i++)
          cars..push_front(false);
    }

    void move()
    {
        if(rand() % 10 == 1)
             cars.push_front(true);
        else
            cars.push_front(false);

        cars.pop_back();    

    }

}



class game
{
    bool quit;

    public:
    void draw()
    {

    }


    void input()
    {

    }


    void logic()
    {

    }

    void run()
    {
        while(!quit)
        {
            input();
            draw();
            logic();
        }
    }

};







int main()
{






getchar();
system("pause");
return 0;
}