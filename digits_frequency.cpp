#include <iostream>
using namespace std;

int main()
{
    int digits_array[10];
    for (int i = 0; i < 10; ++i)
    {
        digits_array[i] = 0;
    }
    int N = -1;
    cout << "Enter N, where N <= 200.\n";
    cin >> N;
    int numbers_array[N];
    cout << "Enter Array of N values.\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers_array[i];
        int temp = numbers_array[i];
        while(temp)
        {
            digits_array[temp % 10] += 1;
            temp /= 10;
        }
    }
    cout << "Output: \n";
    for (int i = 0; i < 10; ++i)
    {
        cout << i << " " << digits_array[i] << "\n";
    }
    return 0;
}