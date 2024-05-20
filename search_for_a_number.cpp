#include<iostream>
using namespace std;

//nested for loop.
// int main()
// {
//     int n = -1;
//     cout << "Enter n <= 200.\n";
//     cin >> n;
//     if (n > 200)
//     {
//         cout << "Invalid input.\n";
//         return 0;
//     }
//     int numbers[n];
//     cout << "Enter the numbers.\n";   
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> numbers[i];
//     }
//     int n_search = -1;
//     cout << "Enter how many numbers you need to search for.\n";
//     cin >> n_search;
//     cout << "Enter the numbers.\n";    
//     int search[n_search];
//     int search_index[n_search] = {-1};
//     for (int i = 0; i < n_search; ++i)
//     {
//         cin >> search[i];
//         search_index[i] = -1;
//     }
//     for (int i = 0; i < n_search; ++i)
//     {
//         for (int j = n - 1; j >= 0; --j)
//         {
//             if (search[i] == numbers[j])
//             {
//                 search_index[i] = j;
//                 break;
//             }
//         }
//     }
//     cout << "Output\n";
//     for (int i = 0; i < n_search; i++)
//     {
//         cout << search_index[i] << " ";
//     }
//     return 0;
// }

//more optimized solution

int main()
{
    int N = 501;
    int ref_array[N];
    for (int i = 0; i < N; ++i)
    {
        ref_array[i] = -1;
    }
    int n = -1;
    cout << "Enter the length of the main array.\n";
    cin >> n;
    int numbers[n];
    cout << "Enter the main array.\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
        ref_array[numbers[i]] = i;
    }
    int n_search = -1;
    cout << "Enter how many numbers you want to search for.\n";
    cin >> n_search;
    int search[n_search];
    cout << "Enter the values you want to search for.\n";
    for (int i = 0; i < n_search; ++i)
    {
        cin >> search[i];
        cout <<" "<< ref_array[search[i]] << "\n";
    }

    return 0;
}