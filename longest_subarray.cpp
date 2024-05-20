#include<iostream>
using namespace std;

int main()
{
    int N = -1;
    cout << "Enter the array length.\n";
    cin >> N;
    int array[N];
    cout << "Enter the array: \n";
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int difference[2001];
    for (int i = 0; i < 2001; i++)
    {
        difference[i] = 999999;
    }

    int max_subarray_length = 0;
    int max_subarray_start_index = -1;
    int max_subarray_end_index = -1;

    int added = 0;
    difference[0 + 1000] = -1; //difference 0 appeared before the array (-1)

    for(int i = 0; i < N; i++)
    {
        if (array[i] == 0)
        {
            added -= 1;
        }
        else
        {
            added += 1;
        }

        int shift = added + 1000;

        if (difference[shift] == 999999)
        {
            difference[shift] = i;
        }
        else
        {
            int subarray_length = i - difference[shift];
            if (subarray_length > max_subarray_length)
            {
                max_subarray_length = subarray_length;
                max_subarray_start_index = difference[shift] + 1;
                max_subarray_end_index = i;
            }
        }
    }
    if (max_subarray_length == 0)
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Max Length: " << max_subarray_length << " start at " << max_subarray_start_index << " Ending at " << max_subarray_end_index; 
    }

    return 0;
}