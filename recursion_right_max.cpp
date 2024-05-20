#include<iostream>
using namespace std;

// void right_max(int arr[], int len, int start_psoition)
// {
//     if(start_psoition == 0)
//     {
//         return;
//     }
//     arr[start_psoition - 1] = max(arr[start_psoition], arr[start_psoition - 1]);
//     right_max(arr, len, start_psoition - 1);
// }

void right_max(int arr[], int len, int start_psoition = 0)
{
    if(start_psoition == len - 1)
    {
        return;
    }
    right_max(arr, len, start_psoition + 1);
    arr[start_psoition] = max(arr[start_psoition], arr[start_psoition + 1]);
    
}

void right_max_v2(int arr[], int len)
{
    if(len == 1)
    {
        return;
    }
    right_max(arr + 1, len - 1);  // arr + 1 is the a new array shifted, E.g. {1, 8, 2, 10, 3} ==> {8, 2, 10, 3}
    arr[0] = max(arr[0], arr[1]); // then we only need to think about arr(0).
    
}


int main()
{

    int arr[6] = {1, 3, 5, 7, 4, 2};
    right_max (arr, 6);

    cout << "Output: ";
    for (int i = 0; i < 6; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}