#include <iostream>
using namespace std;

int main()
{
    int freq_index = 501;
    int freq_array[501]; //freq array.

    for (int i = 0; i < freq_index; ++i)
    {
        freq_array[i] = 0;
    }
    int N = -1;
    cout << "Input: ";
    cin >> N;
    int numbers_array[N]; // input numbers array.
    int numbers_order[N]; // array to track the order.
    for (int i = 0; i < N; i++)
    {
        numbers_order[i] = -1;
        cin >> numbers_array[i];
        if(freq_array[numbers_array[i]] == 0)
        {
            freq_array[numbers_array[i]] += 1;
            numbers_order[i] = numbers_array[i];
        }   
    }
    cout << "Output: ";
    for (int i = 0; i < N; ++i)
    {
        if (numbers_order[i] != -1)
        {
            cout << numbers_order[i] << " ";
        }
    }
    return 0;
}