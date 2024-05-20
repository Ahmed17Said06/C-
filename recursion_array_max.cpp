#include<iostream>
using namespace std;

int arr_max(int arr[], int len)
{
    if (len == 1)
    {
        return arr[0];
    }
    return max(arr[len - 1], arr_max(arr, len - 1));
}

int main()
{
    int input [5] = {1, 8, 2, 10, 3};
    cout << arr_max(input, 5);
    return 0;
}