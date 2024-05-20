#include<iostream>
using namespace std;

int main()
{
    int freq_index = 501;
    int freq_array[501];
    for (int i = 0; i < freq_index; ++i)
    {
        freq_array[i] = 0;
    }
    int max_n = 200;
    int input_n = -1;
    int recamans_array[200];
    recamans_array[0] = 0;
    freq_array[recamans_array[0]] += 1;
    recamans_array[1] = 1;
    freq_array[recamans_array[1]] += 1;
    cout << "input: ";
    cin >> input_n;
    for (int i = 2; i <= input_n; ++i)
    {
        int next_value = recamans_array[i - 1] - (i - 1) - 1;
        if (next_value <= 0 || freq_array[next_value] != 0)
        {
            next_value = recamans_array[i - 1] + (i - 1) + 1;
        }
        recamans_array[i] = next_value;
        freq_array[next_value] += 1;
    }
    cout << "Output: " << recamans_array[input_n];
    return 0;
}