#include <iostream>

using namespace std;

int main()
{
    int age;
    double weight;
    char gender;

    cout << "Enter your age and gender: ";
    cin >> age >> gender;

    cout << "You are " << age << " years old" << endl;
    cout << "You are " << gender << endl;

    cin.ignore(100, '\n');

    cout << "Enter your weight: ";
    cin >> weight;

    cout << "You weigh " << weight << " kg" << endl;

    return 0;
}