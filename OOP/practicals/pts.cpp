#include <iostream>
using namespace std;

class Base // abstract class
{
public:
    int x;

    Base() : x(0) {}
    Base(int val) : x(val) {}

    virtual void show() = 0;
    // {
    //     cout << "Base x: " << x << endl;
    // }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived x: " << x << endl;
    }
};

int main()
{

    // Base b1(42);
    Base *ptr;

    Derived d1;
    // Derived *dptr = &d1;
    ptr = &d1;
    ptr->show();
    ptr->x = 100;
    ptr->show();
    // delete ptr;
    return 0;
}