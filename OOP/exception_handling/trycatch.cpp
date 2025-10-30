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

    try
    {
        if (divisor == 0)
        {
            throw 400;
        }

        if (dividend < divisor)
        {
            throw "Dividend is less than divisor.";
        }

        if (divisor == dividend)
        {
            throw string("Dividend is equal to divisor.");
        }

        quotient = dividend / divisor;

        cout << "Quotient: " << quotient << endl;
    }

    catch (int e)
    {
        cout << "Exception caught: Division by zero is not allowed. Error code: " << e << endl;
    }

    catch (const char *msg)
    {
        cerr << "Exception caught: " << msg << endl;
    }

    catch (string msg)
    {
        cerr << "Exception caught: " << msg << endl;
    }

    return 0;
}