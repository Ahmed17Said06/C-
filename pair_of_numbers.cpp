#include<iostream>
using namespace std;

int main()
{
    int a = -1, b = -1, sum = -1;

    int cnt = 0;

    cin >> a >> b >> sum;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = 1; i <= b; i++)
    {
        if ((sum - i) < a && (sum - i) >= 1)
        {
            cout << i << " " << (sum - i) << "\n";
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}