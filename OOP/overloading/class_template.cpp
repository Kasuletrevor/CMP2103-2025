#include <iostream>
using namespace std;

template <class T, class U>
class Box
{
private:
    T length;
    U width;

public:
    void setLength(T len)
    {
        length = len;
    }
    T getLength()
    {
        return length;
    }

    void setWidth(U w)
    {
        width = w;
    }

    U getWidth()
    {
        return width;
    }
    Box() : length(0), width(0) {}
};

int main()
{
    Box<int, int> intBox;
    Box<double, double> doubleBox;

    intBox.setLength(10);
    doubleBox.setLength(20.5);

    intBox.setWidth(5);
    doubleBox.setWidth(10.5);

    cout << "Integer Box Length: " << intBox.getLength() << endl;
    cout << "Double Box Length: " << doubleBox.getLength() << endl;

    return 0;
}