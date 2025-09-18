#include <iostream>

using namespace std;

int main()
{

    int n;
    bool isPrime = true;
    int rem;

    // using a do while loop

    while (true)
    {
        cout << "Enter a positive integer > 1: ";
        cin >> n;

        isPrime = true;

        if (n <= 1)
        {
            cout << "Input must be greater than 1." << endl;
            return 1;
        }

        for (int i = 2; i < n - 1; i++)
        {

            rem = n % i;
            if (rem == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << n << " is a prime number." << endl;
        else
            cout << n << " is not a prime number." << endl;
    }

    return 0;
}