#include<iostream>
using namespace std;


bool is_palindrome(int arr[], int len)
{
    if(len <= 0)
    {
        return true;
    }
    else if (arr[0] == arr[len - 1])
    {
        return is_palindrome(arr + 1, len - 2);
    }
    else
    {
        return false;
    }

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

    if (is_palindrome(arr, len))
    {
        cout << "True. \n";
    }
    else
    {
        cout << "false. \n";
    }

    return 0;
}