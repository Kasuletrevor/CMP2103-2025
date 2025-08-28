#include <iostream>

using namespace std;

int main()
{
    int age;
    double weight;
    char grade;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your weight: ";
    cin >> weight;

    cout << "You entered:\n";
    cout << "Age: " << age << endl;

    cout << "Grade: " << grade << endl;
    cout << "Weight: " << weight << endl;

    bool error = false;
    error = cin.fail();

    cout << "Error status: " << error << endl;

    if (error)
    {
        cin.clear();           // clear the error flag
        cin.ignore(100, '\n'); // ignore the input
    }

    cout << "Enter another grade: ";
    cin >> grade;

    cout << "You entered another grade: " << grade << endl;

    return 0;
}