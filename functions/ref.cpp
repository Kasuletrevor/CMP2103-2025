#include <iostream>
using namespace std;

int main()
{ // alias
    int a = 10;
    int &ref = a;
    // int *ptr = &a;

    cout << "Value of a is " << a << endl;
    cout << "Address of a is " << &a << endl;
    cout << "Value of ref is " << ref << endl;
    cout << "Address of ref is " << &ref << endl;

    // ref = 20;
    a = 20;
    cout << "Changed value of a to 20" << endl
         << endl;

    cout << "Value of a is " << a << endl;
    cout << "Address of a is " << &a << endl;
    cout << "Value of ref is " << ref << endl;
    cout << "Address of ref is " << &ref << endl;

    return 0;
}