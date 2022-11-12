#include <iostream>
#include <string>

using namespace std;
class Clock
{

private:
    int mHours;
    int mMinutes;
    int mSeconds;

public:
    Clock();
    Clock(int);
    Clock(int, int);
    Clock(int, int, int);

    int getHours()
    {
        return mHours;
    }
    int getMinutes()
    {
        return mMinutes;
    }
    int getSeconds()
    {
        return mSeconds;
    }

    void setHours(int hourValue)
    {
        if (hourValue > 0 && hourValue < 13)
        {
            mHours = hourValue;
        }
        else if (hourValue < 0)
        {
            mHours = 0;
        }
        else if (hourValue > 12)
        {
            mHours = 12;
        }
    }
    void setMinutes(int minuteValue)
    {
        if (minuteValue > 0 && minuteValue < 60)
        {
            mMinutes = minuteValue;
        }
        else if (minuteValue < 0)
        {
            mMinutes = 0;
        }
        else if (minuteValue > 59)
        {
            mMinutes = 59;
        }
    }
    void setSecond(int secondValue)
    {
        if (secondValue > 0 && secondValue < 60)
        {
            mSeconds = secondValue;
        }
        else if (secondValue < 0)
        {
            mSeconds = 0;
        }
        else if (secondValue > 59)
        {
            mSeconds = 59;
        }
    }

    bool isMorning();
    bool isAfternoon();
    bool isEvening();
    void printTimeMessage(int, int, int);
    void tick();
    friend ostream &operator<<(ostream &, Clock &);
};

ostream &operator<<(ostream &out, Clock &time)
{
    if (time.mHours > 12)
        time.mHours = time.mHours - 12;
    else
        time.mHours = time.mHours;
    out << time.mHours << ":" << time.mMinutes << ":"
        << time.mSeconds << endl;
    return out;
}

// constructors ______
Clock::Clock()
{
    setHours(12);
    setMinutes(0);
    setSecond(0);
}


Clock::Clock(int hourValue)
{
    setHours(hourValue);
}

Clock::Clock(int hourValue, int minuteValue)
{
    setHours(hourValue);
    setMinutes(minuteValue);
}

Clock::Clock(int hourValue, int minuteValue, int secondValue)
{
    setHours(hourValue);
    setMinutes(minuteValue);
    setSecond(secondValue);
}
bool Clock::isMorning()
{
    if (mHours < 12)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Clock::isAfternoon()
{
    if (mHours >= 12 && mHours < 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Clock::isEvening()
{
    if (mHours < 18)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void Clock::tick()
{
    setSecond((getSeconds() + 1) % 60);
    if (getSeconds() == 0)
    {
        setMinutes((getMinutes() + 1) % 60);
        if (getMinutes() == 0)
        {
            setHours((getHours() % 12) + 1);
        }
    }
}

void Clock::printTimeMessage(int, int, int)
{
    Clock a(int);
    cout << "The current time is" << mHours << mMinutes << mSeconds << endl;
}


int main()
{
    Clock t;
    int hour, minute, second;
    cout << "What is the hour?" << endl;
    cin >> hour;
    cout << "minute?" << endl;
    cin >> minute;
    cout << "second?" << endl;
    cin >> second;
    t.printTimeMessage(hour, minute, second);
    return 0;
}