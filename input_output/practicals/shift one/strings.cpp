#include <iostream>
#include <string>

using namespace std;

int main()
{
    // get name using cin
    string firstname;
    string lastname;

    cout << "Enter your first name: ";
    cin >> firstname;

    cout << "Enter your last name: ";
    cin >> lastname;

    cout << "my name is " << firstname << " " << lastname << endl;

    return 0;
}