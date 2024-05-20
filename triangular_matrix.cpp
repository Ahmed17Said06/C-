#include<iostream>
using namespace std;

int main()
{
    int N = -1;
    cout << "Enter N. \n";
    cin >> N;

    int matrix[N][N];

    cout << "Enter the matrix.\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    int diagonal_sum = 0;
    int lower_sum = 0;
    int upper_sum =0;

    for(int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (j > i)
            {
                upper_sum += matrix[i][j];
            }
            else if(j < i)
            {
                lower_sum += matrix[i][j];
            }
            else
            {
                diagonal_sum += matrix[i][j];
            }
        }
    }
    cout << "Output: \n";
    cout << diagonal_sum + lower_sum << "\n";
    cout << diagonal_sum + upper_sum << "\n";
    return 0;
}