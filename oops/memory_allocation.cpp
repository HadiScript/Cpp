#include <iostream>
using namespace std;

class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void set_price(void);
    void disp_price(void);
};

void shop ::set_price(void)
{
    cout << "enter id of your items" << counter + 1 << endl;
    cin >> item_id[counter];

    cout << "enter id of your price" << endl;
    cin >> item_price[counter];

    counter++;
}

void shop ::disp_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of the items with id" << item_id[i] << "is" << item_price[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.disp_price();
    return 0;
}