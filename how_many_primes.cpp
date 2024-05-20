#include<iostream>
using namespace std;

int main()
{
    int N = -1, M = -1;
    cout << "Enter N, & M. \n";
    cin >> N >> M;

    int matrix[N][M];
    bool is_prime[N][M] = {0};

    cout << "Enter the matrix.\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            int value = matrix[i][j];
            cin >> value;
            if (value > 1)
            {
                is_prime[i][j] = 1;
                for (int k = 2; k <= value/2; ++k)
                {
                    if (value % k == 0)
                    {
                        is_prime[i][j] = 0;
                    }
                }
            }
        }
    }

    int Q = -1;
    cout << "Enter the number of the quiries.\n";
    cin >> Q;

    while (Q--)
    {
        int start_row = -1, start_col = -1, rows = -1, cols = -1, count = 0;
        cout << "Enter i, j, r, c.\n";
        cin >> start_row >> start_col >> rows >> cols;

        for (int i = start_row; i < rows + start_row; ++i)
        {
            for (int j = start_col; j < cols + start_col; ++j)
            {
                count += is_prime[i][j];
            }
        }
        cout << "Output: "<< count << "\n";  
    }
    return 0;
}