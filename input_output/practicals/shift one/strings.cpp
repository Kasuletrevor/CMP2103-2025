#include <iostream>
#include <string>

using namespace std;

int main()
{
    // get name using getline
    string firstname;
    string lastname;

    cout << "Enter your first name: ";
    getline(cin, firstname);

    cout << "Enter your last name: ";
    getline(cin, lastname);

    cout << "my name is " << firstname << " " << lastname << endl;

    // concatenate first and last name
    string fullname = firstname + " " + lastname;

    cout << "my full name is " << fullname << endl;

    return 0;
}