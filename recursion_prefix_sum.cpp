#include<iostream>
using namespace std;


int prefix_sum(int arr[], int len, int N)
{
    if(N == 0)
    {
        return 0;
    }

    return arr[N - 1] + prefix_sum(arr, len, N - 1);
}

int prefix_sum_v2(int arr[], int len, int N)
{
    if(N == 0)
    {
        return 0;
    }

    return arr[0] + prefix_sum_v2(arr + 1, len, N - 1);
}

int main()
{
    int len, N;
    cout <<"Enter array length and N.\n";
    cin >> len >> N;

    int arr[len];
    cout << "Enter arrays values.\n";
    for (int i = 0; i < len; ++i)
    {
        cin >> arr[i];
    }

    cout << "Output: " <<  prefix_sum_v2(arr, len, N);

    return 0;
}