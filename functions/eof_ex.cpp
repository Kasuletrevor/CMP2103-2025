#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int num;

    // cin >> num;
    do
    {
        cin >> num;
        sum += num;

    } while (cin);

    cout << "Sum is " << sum << endl;

    return 0;
}