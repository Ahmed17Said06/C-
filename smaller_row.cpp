#include<iostream>
using namespace std;

int main()
{
    int N = -1, M = -1;
    cout << "Enter N, & M. \n";
    cin >> N >> M;

    int matrix[N][M];

    cout << "Enter the matrix.\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    int row1 = -1, row2 = -1;
    int number_quiries = 0;
    cout << "Enter the no. of quiries\n";
    cin >> number_quiries;
    while (number_quiries)
    {
        cout << "Enter the 2 rows you want to compare.\n";
        cin >> row1 >> row2;
        bool smaller = true;
        for (int i = 0; i < M; ++i)
        {
            if (matrix[row2 - 1][i] < matrix[row1 - 1][i])
            {
                smaller = false;
                break;
            } 
        }
        if(smaller)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
        number_quiries--;
    } 
    return 0;
}