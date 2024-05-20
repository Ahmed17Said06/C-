#include<iostream>
using namespace std;

int path_sum(int grid[100][100], int r, int c, int rows, int cols)
{
    int sum = grid[r][c];
    int diag = 0;
    int right = 0;
    int down = 0;
    int next_r = 0;
    int next_c = 0;
    if (r < rows && c < cols)
    {
        diag = grid[r + 1][c + 1];
    }

    if (r < rows)
    {
        down = grid[r + 1][c];
    }

    if (c < cols)
    {
        right = grid[r][c + 1];
    }

    if (r == rows - 1 && c == cols - 1) // base case
    {
        return sum;
    }

    if (diag > right && diag > down)
    {
        next_r = r + 1;
        next_c = c + 1;
    }
    else if (right > diag && right > down)
    {
        next_c = c + 1;
        next_r = r;
    }
    else if (down > diag && down > right)
    {
        next_r = r + 1;
        next_c = c;
    }
    
    return sum + path_sum(grid, next_r, next_c, rows, cols);
}

int main()
{
    int arr[100][100];

    cout << "Enter the matrix: \n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> arr[i][j];
        }
    }

    cout << path_sum(arr, 0, 0, 3, 3);

    return 0;
}