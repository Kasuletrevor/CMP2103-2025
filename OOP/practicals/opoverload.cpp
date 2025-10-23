#include <iostream>
using namespace std;

class Point
{
    friend ostream &operator<<(ostream &Y, const Point &p);
    friend Point add(Point &p1, Point &p2);
    // friend Point operator+(Point &p1, Point &p2);

private:
    int x;
    int y;

public:
    Point() : x(0), y(0) {}
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}
    Point operator+(Point &other)
    {
        Point result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }

    void display()
    {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }

    Point add(Point &p2)
    {
        Point p3;

        p3.x = x + p2.x;
        p3.y = y + p2.y;

        return p3;
    }
};

Point add(Point &p1, Point &p2)
{
    Point p3;

    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    return p3;
}

ostream &operator<<(ostream &Y, const Point &p)
{
    return Y << "Point(" << p.x << ", " << p.y << ")" << endl;
}

// Point operator+(Point &p1, Point &p2)
// {
//     Point p3;

//     p3.x = p1.x + p2.x;
//     p3.y = p1.y + p2.y;

//     return p3;
// }

int main()
{
    Point p1;
    Point p2(10, 20);

    p1.display();
    p2.display();

    Point p3 = add(p1, p2);
    p3.display();

    Point p4 = p1.add(p2);
    p4.display();

    int a = 8, b = 7, c;
    c = a + b;

    cout << c << endl;

    p4 = p1 + p2;
    cout << "P4 is" << p4 << endl;
    return 0;
}