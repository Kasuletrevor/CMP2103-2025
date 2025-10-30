#include <iostream>
#include <cassert>

using namespace std;

int main()
{

    int dividend, divisor, quotient;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    assert(divisor != 0);

    quotient = dividend / divisor;

    cout << "Quotient: " << quotient << endl;

    return 0;
}