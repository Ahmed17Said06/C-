#include <iostream>
using namespace std;

int main()
{
    bool is_prime = false;
    int n = 1;

    cout << "Enter a number \n";
    cin >> n;

    for (int i = 2; i <= n/2; ++i)
    {
        if ((n % i) == 0)
        {
            is_prime = true;
            break;
        }
    }
    if (is_prime)
    {
        cout <<"YES\n";
    }
    else
    {
        cout << "NO \n";
    }
    return 0;
}