#include<iostream>
using namespace std;

void array_increment(int arr[], int len)
{
    if(len == 0)
    {
        return;
    }

    arr[len - 1] += (len - 1);
    array_increment(arr, len - 1);
}

int main()
{
    int len;
    cout <<"Enter array length.\n";
    cin >> len;

    int arr[len];
    cout << "Enter arrays values.\n";
    for (int i = 0; i < len; ++i)
    {
        cin >> arr[i];
    }


    array_increment(arr, len);
    cout << "Output: ";
    for (int i = 0; i < len; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}