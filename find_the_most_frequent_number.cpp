#include <iostream>
using namespace std;

// nested for loop
// int main()
// {
//     int n = -1;
//     int maxRepeat = 0;
//     int maxValueRepeat = 0;

//     cout << "Enter n \n";
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; ++i)
//     {
//         int cnt = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cnt += 1;
//             }
//         }
//         if (cnt > maxRepeat)
//         {
//             maxRepeat = cnt;
//             maxValueRepeat = arr[i];
//         }
//     }
//     cout << maxValueRepeat << " repeated "<< maxRepeat << " times";
//     return 0;
// }

//frequency array

int main ()
{
    int n = -1;
    int most_number_repeated = 0;
    int max_value = 0;

    cout << "Enter n \n";
    cin >> n;

    int freq_array [151] = {0};
    int my_array[n];

    cout << "Enter the array:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> my_array[i];
        freq_array[my_array[i]] += 1;
    }
    for (int i = 0; i < 151; ++i)
    {
        if (freq_array[i] > max_value)
        {
            most_number_repeated = i;
            max_value = freq_array[i];
        }
    }
    cout << most_number_repeated << " repeated "<< max_value << " times";
    return 0;
}