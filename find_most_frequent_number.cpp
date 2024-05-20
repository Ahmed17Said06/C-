#include <iostream>
using namespace std;

int main()
{
    int ref_index = 270 + 500 + 1;
    int ref_array [ref_index];
    for (int i = 0; i < ref_index; ++i)
    {
        ref_array[i] = 0;
    }
    int numbers_index = -1;
    cout << "Enter the array size N where N <= 200.\n";
    cin >> numbers_index;
    int numbers_array[numbers_index];
    cout << "Enter the array values.\n";
    for (int i = 0; i < numbers_index; ++i)
    {
        cin >> numbers_array[i];
        ref_array[numbers_array[i] + 500 + 1] += 1;
    }
    int most_frequent_number_shifted = 0;
    int repetation_times = -1;

    for (int i = 0; i < ref_index; ++i)
    {
        if (ref_array[i] > repetation_times)
        {
            repetation_times = ref_array[i];
            most_frequent_number_shifted = i;
        }
    }
    cout << most_frequent_number_shifted - 500 - 1 << " repeated "<< repetation_times <<": the largest"; 
    return 0;
}