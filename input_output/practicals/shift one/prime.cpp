#include <iostream>

using namespace std;

bool isPrime(int num);

int main()
{

    int n;
    int rem;

    // using a do while loop

    while (true)
    {
        cout << "Enter a positive integer > 1: ";
        cin >> n;

        if (isPrime(n))
            cout << n << " is a prime number." << endl;
        else
            cout << n << " is not a prime number." << endl;
    }

    return 0;
}

bool isPrime(int num)
{
    int rem;
    bool flag = true;
    if (num <= 1)
    {
        cout << "Input must be greater than 1." << endl;
        return false;
    }

    for (int i = 2; i <= num - 1; i++)
    {

        rem = num % i;
        if (rem == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}