#include<iostream>
using namespace std;


int main()
{
    int row = 0, col = 0;

    cout << "Enter no. of rows, and columns.\n";
    cin >> row >> col;

    int matrix[row][col];

    cout << "Enter the matrix.\n";

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    int max = 0;
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if(matrix[i][j] >= max)
            {
                max = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    cout << "Max value at position " << max_row << " " << max_col << " " << "with value = "<< max;
    return 0;
}