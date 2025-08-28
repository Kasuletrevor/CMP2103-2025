#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age = 25;
    double weight = 56;
    cout << "Hello World!" << endl;
    // cout << "My age is " << age << endl;
    cout << setfill('*') << setw(5) << age << " is my age" << endl;
    cout << showpoint;
    cout << weight; // cout << fixed;
    // cout << setprecision(2) << weight << endl;
    return 0;
}