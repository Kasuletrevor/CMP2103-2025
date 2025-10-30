#include <iostream>
using namespace std;

void display(int a)
{
    cout << a << endl;
}

void display(double a)
{
    cout << a << endl;
}

void display(string a)
{
    cout << a << endl;
}

// void display(string s, int count)
// {
//     cout << "String: " << s << " Count: " << count << endl;
// }

int main()
{

    display(42);              // Calls display(int)
    display(42.0);            // Calls display(double)
    display("Hello, World!"); // Calls display(string)
    // display("Test", 5);       // Calls display(string, int)

    return 0;
}