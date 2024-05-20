#include<iostream>
using namespace std;

int main()
{
    int K = -1, N = -1;
    cout << "Enter K & N.\n";
    cin >> K >> N;
    if (K > N)
    {
        cout << "Invalid K or N.\n";
        return 0;
    }
    int numbers_array[N];
    int window_array[K];
    cout << "Enter the array.\n";

    for (int i = 0; i < N; ++i)
    {
        cin >> numbers_array[i];
    }
    int sum = 0;
    for (int i = 0; i < K; ++i) //intial sum of the first window 
    {
        sum += numbers_array[i];
    }
    
    int max_sum = sum;
    int start_ptr = 0;
    int end_ptr = start_ptr + (K - 1);
    for (int i = 1 ; i <= (N - 1) - (K - 1); ++i)
    {
        sum = sum - numbers_array[i - 1] + numbers_array [i + (K - 1)];
        if (sum > max_sum)
        {
            max_sum = sum;
            start_ptr = i;
            end_ptr = start_ptr + (K - 1);
        }
    }
    cout << "output: "<< start_ptr << " " << end_ptr << " " << max_sum;
    return 0;
}