// this is a modified version of the palindrome one solved before, with just using functions to re-arrange it.

#include <iostream>
using namespace std;

bool plaindrome (int arr[], size_t size)
{
    bool is_plaindrome = true;

    for (int start = 0; start < size/2; ++start)
    {
        int end = size - 1 - start;
        if (arr[start] != arr[end])
        {
            is_plaindrome = false;
            return is_plaindrome;
        }
    }
    return is_plaindrome;
}

int main()
{
    int n = -1;
    cout << "Enter n: \n";
    cin >> n;
    int numbers[n];
    
    cout << "Enter the numbers array:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }


    if (plaindrome(numbers, n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}