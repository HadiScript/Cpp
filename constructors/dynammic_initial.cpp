#include <iostream>
using namespace std;

class bankDeposite
{
    int principle;
    int years;
    float interst_rate;
    float return_value;

public:
    bankDeposite() {}
    bankDeposite(int p, int y, float r); // r can be value like 0.03
    bankDeposite(int p, int y, int r);   // r can be a value of the 11
    void show();
};

bankDeposite ::bankDeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    interst_rate = r;
    return_value = principle;

    for (int i = 0; i < y; i++)
    {
        return_value *= (1 + r);
    }
}

bankDeposite ::bankDeposite(int p, int y, int r)
{
    principle = p;
    years = y;
    interst_rate = float(r) / 100;
    return_value = principle;

    for (int i = 0; i < y; i++)
    {
        return_value *= (1 + interst_rate);
    }
}

void bankDeposite ::show()
{
    cout << endl
         << "principle amount was "
         << principle << ","
         << "return value after " << years
         << " is " << return_value << endl;
}

int main()
{
    bankDeposite bd1, bd2, bd3;

    int p, y;
    float r;
    int R;

    cout << "enter the value of the p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankDeposite(p, y, r);
    bd1.show();

    cout << "enter the value of the p, y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankDeposite(p, y, R);
    bd2.show();

    return 0;
}