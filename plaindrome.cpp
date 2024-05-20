#include <iostream>
using namespace std;

int main()
{
    int n = -1;
    cout << "Enter n: \n";
    cin >> n;
    int numbers[n];
    bool is_plaindrome = true;

    cout << "Enter the numbers array:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    for (int start = 0; start < n/2; ++start)
    {
        int end = n - 1 - start;
        if (numbers[start] != numbers[end])
        {
            is_plaindrome = false;
            break;
        }
    }
    if (is_plaindrome)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}