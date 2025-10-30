#include <iostream>
using namespace std;

// void display(int a)
// {
//     cout << a << endl;
// }

// void display(double a)
// {
//     cout << a << endl;
// }

// void display(string a)
// {
//     cout << a << endl;
// }

// replace the display function with a template
template <typename T1>
void display(T1 a)
{
    cout << a << " " << endl;
}

void display(string s, int count)
{
    cout << "String: " << s << " Count: " << count << endl;
}

int main()
{

    display("Age:", 42);                // Calls display(int)
    display("Height:", 5.9);            // Calls display(double)
    display("Greeting: Hello, World!"); // Calls display(string)

    return 0;
}