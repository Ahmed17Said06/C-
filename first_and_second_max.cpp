#include <iostream>
using namespace std;

int main()
{
    int n = -1, firstMax = -1, secondMax = -1;
    int firstIndex = 0, secondIndex = 0;

    cout << "Enter the array size: \n";
    cin >> n;
    int arr [n];
    cout << "Enter the array: \n";

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            secondIndex = firstIndex;
            firstMax = arr[i];
            firstIndex = i;
            
        }
        else if (arr[i] > secondMax)
        {
            secondMax = arr[i];
            secondIndex = i;
        }
    }
    cout << "First Max " << firstMax << " Second Max " << secondMax << " First Index " << firstIndex << " Second Index " << "Second index " << secondIndex;
    return 0;
}