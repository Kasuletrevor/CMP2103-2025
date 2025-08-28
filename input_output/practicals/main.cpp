#include <iostream>
#define PI 3.14159

using namespace std;

int main()
{
    double radius, area;
    const double pi = 3.14159;
    const int gravity = 10;

    cout << radius << endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    /* cout << "The radius is:
    " << radius << endl;*/

    area = PI * radius * radius;

    cout << "The area of a circle of radius " << radius << " is " << area << endl;

    return 0;
}