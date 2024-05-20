#include <iostream>
using namespace std;

int main()
{
    int n = -1;
    int min = 100000, max = -1;

    cout << "Enter n:\n";
    cin >> n;
    int my_arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> my_arr[i];
        if (my_arr[i] < min)
        {
            min = my_arr[i];
        }
        if (my_arr[i] > max)
        {
            max = my_arr[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (my_arr[i] == min)
        {
            my_arr[i] = max;
        }
        else if (my_arr[i] == max)
        {
            my_arr[i] = min;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << my_arr[i] << " ";
    }
    
    return 0;
}