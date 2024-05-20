#include <iostream>
using namespace std;



//brute force O(n^3)
// int main()
// {
//     int N = -1;
//     cout << "Enter the length of the array N.\n";
//     cin >> N;
//     int numbers_array[N];
//     cout << "Enter the array.\n";
//     for (int i = 0; i < N; ++i)
//     {
//         cin >> numbers_array[i];
//     }
//     int sub_arrays = 0;

//     for (int subarray_length = 1; subarray_length <= N; ++subarray_length)
//     {
//         for(int subarray_start = 0; subarray_start <= N - subarray_length; ++subarray_start)
//         {
//             bool increasing = true;
//             for (int subarray_index = 1; subarray_index < subarray_length; ++subarray_index)
//             {
//                 if(numbers_array[subarray_start + subarray_index] <= numbers_array[subarray_start + subarray_index - 1])
//                 {
//                     increasing = false;
//                     break;
//                 }
//             }
//             sub_arrays += increasing;
//         }
//     }

//     cout << "Output: " << sub_arrays;

//     return 0;
// }

// (O(n^2))
// int main()
// {
//     int N = -1;
//     cout << "Enter the length of the array N.\n";
//     cin >> N;
//     int numbers_array[N];
//     cout << "Enter the array.\n";
//     for (int i = 0; i < N; ++i)
//     {
//         cin >> numbers_array[i];
//     }
//     int sub_arrays = 0;

//     for (int i = 0; i < N; i++)
//     {
//         sub_arrays += 1;
//         for (int j = i + 1; j < N; j++)
//         {
//             if (numbers_array[j] > numbers_array[j - 1])
//             {
//                 sub_arrays += 1;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
//     cout << "Output: " << sub_arrays;
//     return 0;
// }


//O(n)
//if you have a valid subsequence of lenght n, then every subsequence inside it is a valid subsequence.
int main()
{
    int N = -1;
    cout << "Enter the length of the array N.\n";
    cin >> N;
    int numbers_array[N];
    cout << "Enter the array.\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers_array[i];
    }

    int sub_arrays = 1; //each subarray is a valid sequence by itself.
    int curr_count = 1; //each subarray is a valid sequence by itself.

    for (int i = 1; i < N; ++i)
    {
        if (numbers_array[i] > numbers_array[i - 1])
        {
            curr_count++;
        }
        else
        {
            curr_count = 1;
        }
        sub_arrays += curr_count;
    }
    cout << "Output: " << sub_arrays;
    return 0;
}