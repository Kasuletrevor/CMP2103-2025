#include <iostream>

using namespace std;

int main()
{

    int odd;
    int count;

    for (count = 1; count <= 10; count++)
    {
        odd = 2 * count - 1;
        cout << odd << " ";
    }

    return 0;
}