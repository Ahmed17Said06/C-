#include <iostream>
using namespace std;

int main()
{
    int n = -1;
    int smallest_sum = 1000000;

    cout << "Enter n\n";
    cin >> n;
    int numbers[n];
    cout << "Enter the array\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int sum = numbers[i] + numbers[j] + j - i;
            if (sum < smallest_sum)
            {
                smallest_sum = sum; 
            }
        }
    }
    cout << "the smallest sum = " << smallest_sum;
    return 0;
}