#include <iostream>
using namespace std;

int main()
{
    int n = -1;

    cout << "Enter a number \n";
    cin >> n;

    for (int i = 2; i <= n; ++i)
    {   bool isPrime = true;
        for (int j = 2; j <= n/2; ++j)
        {
            if ((i != j) && ((i % j) == 0))
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {   if (i != 2)
            {
                cout << ",";
            }
            cout << i;
        }
    }

    return 0;
}