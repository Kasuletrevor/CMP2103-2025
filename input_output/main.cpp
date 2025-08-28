#include <iostream>

using namespace std;

int main()
{
    // cout << "Hello, World!" << endl;

    int a;
    char ch;
    double z;

    cout << "Enter an integer, a character, and a double: ";

    // cin >> a;

    cin >> z;

    cin.ignore(100, '\n');

    // cin.peek();
    cin.get(ch);

    cout << "ch: " << ch << "\n";

    // cin.putback(ch);

    // cin.get(ch);

    // cout << "ch: " << ch << "\n";
    // cout << a << " " << ch << " " << z;
    return 0;
}