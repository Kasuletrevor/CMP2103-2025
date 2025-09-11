#include <iostream>
using namespace std;

void increment(int &n)
{
    n++;
    cout << "Value inside function is " << n << endl;
}

int main()
{

    int num = 10;
    int &refnum = num;

    // int *ptrnum = &num;
    cout << "Value of num is " << num << endl;
    cout << "Address of num is " << &num << endl;

    // cout << "value of refnum is " << refnum << endl;
    // cout << " The address of refnum is " << &refnum << endl;

    increment(num);

    cout << "Value of num is " << num << endl;

    return 0;
}