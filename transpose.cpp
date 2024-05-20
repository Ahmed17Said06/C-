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
    int transpose[M][N];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Output: \n";

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }    
    return 0;
}