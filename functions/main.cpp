#include <iostream>
using namespace std;

void printhello();
int sum(int, int);
void swap(int *, int *);

int main()
{
    printhello();
    int x, y;

    x = 5;
    y = 10;

    cout << "Sum of " << x << " and " << y << " is " << sum(x, y) << endl;

    cout << "Before swapping, x is " << x << " and y is " << y << endl;
    swap(&x, &y);
    cout << "After swapping, x is " << x << " and y is " << y << endl;

    return 0;
}

void printhello()
{
    cout << "Hello, World!" << endl;
}

int sum(int a, int b)
{
    return a + b;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}