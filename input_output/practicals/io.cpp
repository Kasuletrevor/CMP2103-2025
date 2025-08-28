#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int age = 45;
    char ch = 'A';
    double weight = 65;

    cout << showpoint << weight << endl;

    // cout << age << " " << ch << " " << weight<< endl;
    cout << fixed << setprecision(3) << age << endl;

    // cout << setprecision(5) << age << endl;
    cout << setfill('*') << setw(5) << age << ch << endl;
    cout << "End of program";
    return 0;
}