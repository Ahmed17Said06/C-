#include<iostream>
using namespace std;

int main()
{
    int N = -1, M = -1;
    cout << "Enter N, & M: \n";
    
    cin >> N >> M;
    int matrix[N][M];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> matrix [i][j];
        }
    }

    int curr_row_idx = 0, curr_col_idx = 0, sum = 0;
    sum += matrix[0][0];
    bool not_done = true;

    while (not_done)
    {
        int next_row_idx = -1, next_col_idx = -1, next_val = -1;

        //is right ok position?
        if(curr_col_idx + 1 < M)
        {
            next_row_idx = curr_row_idx;
            next_col_idx = curr_col_idx + 1;
            next_val = matrix[next_row_idx][next_col_idx];
        }
        //is down ok position?
        if (curr_row_idx + 1 < N)
        {
            if (next_val == -1 || matrix[curr_row_idx + 1][curr_col_idx] > next_val)
            {
                next_row_idx = curr_row_idx + 1; 
                next_col_idx = curr_col_idx;
                next_val = matrix[next_row_idx][next_col_idx];   
            }
        }
        //is diagonal ok position?
        if (curr_row_idx + 1 < N && curr_col_idx + 1 < M)
        {
            if (next_val == -1 || matrix[curr_row_idx + 1][curr_col_idx + 1] > next_val)
            {
                next_row_idx = curr_row_idx + 1; 
                next_col_idx = curr_col_idx + 1;
                next_val = matrix[next_row_idx][next_col_idx];   
            }
        }
        if (next_val == -1)
        {
            not_done = false;
        }
        else
        {
            curr_row_idx = next_row_idx;
            curr_col_idx = next_col_idx;
            sum += next_val;
        }
    }

    cout << "Output: " << sum;
    return 0;
}