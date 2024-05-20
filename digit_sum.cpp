#include<iostream>
using namespace std;

int main ()
{
    int n = -1, a = -1, b = -1;
    int total = 0;

    cout <<"Enter N, A, B: \n";

    cin >> n >> a >> b;

    for (int i = 1; i <= n; ++i)
    {
        int sum = 0;
        int tmp = i;

        while(tmp)
        {
            sum += (tmp % 10);
            tmp /= 10;
        }
        if (a <= sum && sum <= b)
        {
            total += i;
        }
    }

    cout << "total = " << total;
    return 0;
}