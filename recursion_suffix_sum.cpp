#include<iostream>
using namespace std;


int suffix_sum(int arr[], int len, int N)
{
    if(N == 0)
    {
        return 0;
    }

    return arr[len - 1] + suffix_sum(arr, len - 1, N - 1);
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

    cout << "Output: " <<  suffix_sum(arr, len, N);

    return 0;
}