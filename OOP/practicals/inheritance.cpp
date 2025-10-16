#include <iostream>

using namespace std;

class Vehicle
{
protected:
    int speed;

public:
    void setspeed(int s)
    {
        speed = s;
    }
};

class Car : public Vehicle
{
public:
    // void setspeed(int s)
    // {
    //     speed = s * 100;
    // }
    void displayspeed()
    {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car mycar;
    mycar.setspeed(100);
    mycar.displayspeed();
    return 0;
}