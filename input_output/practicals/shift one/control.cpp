#include <iostream>
using namespace std;

int main()
{
    bool flag;

    // cout << flag << endl;
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 18)
        cout << "You are very young" << endl;
    else if (age < 45)
        cout << "You are a youth" << endl;
    else
        cout << "You are an adult" << endl;

    return 0;

    // flag = num % 2 == 0;

    // if (flag)
    //     cout << "The number is even" << endl;
    // else
    //     cout << "The number is odd" << endl;

    return 0;
}