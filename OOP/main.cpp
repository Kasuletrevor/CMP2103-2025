#include <iostream>

using namespace std;

class clockType
{

    int hr;
    int min;
    int sec;
    static int count;

public:
    void setTime(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    void getTime(int &h, int &m, int &s) const
    {
        h = hr;
        m = min;
        s = sec;
    }

    void getTime2(int *h, int *m, int *s) const
    {
        *h = hr;
        *m = min;
        *s = sec;
    }

    void printTime() const
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }

    static void showCount()
    {
        cout << "Count: " << count << endl;
    }

    // constructor
    clockType()
    {
        cout << "Constructor called!" << endl;
        hr = 11;
        min = 59;
        sec = 59;
        count++;
    }

    clockType(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
        count++;
    }
    ~clockType()
    {
        cout << "Destructor called!" << endl;
    }
};

int clockType::count = 0;

int main()
{
    int h, m, s;
    cout << "Create myClock object" << endl;
    clockType myClock(12, 0, 0);
    clockType::showCount();
    myClock.printTime();
    myClock.setTime(10, 30, 45);

    // myClock.printTime();
    myClock.getTime(h, m, s);
    myClock.getTime2(&h, &m, &s);

    cout << h << ":" << m << ":" << s << endl;

    cout << "Create yourClock object" << endl;
    clockType yourClock;
    clockType::showCount();
    yourClock.printTime();

    return 0;
}

// clockType yourClock;
//     yourClock = myClock;

//     cout << yourClock.hr << ":" << yourClock.min << ":" << yourClock.sec << endl;
//     yourClock.min = 45;
//     cout << yourClock.hr << ":" << yourClock.min << ":" << yourClock.sec << endl;