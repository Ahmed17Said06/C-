#include<iostream>
using namespace std;

int main()
{
    int n = -1;
    cout << "Enter n: \n";
    cin >> n;

    int my_arr[n];
    cout << "Enter the array: \n";
    for (int i = 0; i < n; ++i)
    {
        cin >> my_arr[i];
    }
    cout << my_arr[0] << " ";
    cout << "The unique array numbers are ";
    for (int i = 0; i < n; ++i)
    {
        if (my_arr[i] != my_arr[i - 1])
        {
            cout << my_arr[i] << " ";
        }
    }
    return 0;
}