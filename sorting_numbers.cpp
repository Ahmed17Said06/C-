#include <iostream>
using namespace std;

int main()
{
    int freq_idx = 501;
    int freq_array[freq_idx];

    for (int i = 0; i < freq_idx; ++i)
    {
        freq_array[i] = 0;
    }
    int N = -1;
    cout << "Input: ";
    cin >> N;
    int numbers_array[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> numbers_array[i];
        freq_array[numbers_array[i]] += 1;
    }
    cout << "Output: ";
    for (int i = 0; i < freq_idx; ++i)
    {
        while(freq_array[i])
        {
            cout << i << " ";
            freq_array[i] -= 1;
        }
    }
    return 0;
}
