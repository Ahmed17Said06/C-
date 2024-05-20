#include <iostream>
using namespace std;

int main()
{
    int n = -1;
    bool is_increasing = true;

    cout << "Enter n:\n";
    cin >> n;

    int arr [n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr [i];
        if (i > 0)
        {
            if (arr [i] < arr [i - 1])
            {
                is_increasing = false;
            }
        }
    }

    if (is_increasing)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}