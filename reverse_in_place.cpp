#include <iostream>
using namespace std;

int main ()
{
    int n = -1;
    cout << "Enter the array size \n";
    cin >> n;

    int arr [n];

    cout << "Enter the array \n";
    
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int s = 0; s < n/2; ++s)
    {
        int e = n - 1 - s;
        int temp = arr [s];
        arr [s] = arr [e];
        arr [e] = temp;
    }
    cout << "Reversed Array ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr [i] << " ";
    }
    return 0;
}