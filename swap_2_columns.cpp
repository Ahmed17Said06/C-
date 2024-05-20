#include<iostream>
using namespace std;

int main()
{
    int row = 0, col = 0;

    cout << "Enter the numbers of rows and columns: \n";
    cin >> row >> col;

    int matrix[row][col];

    cout << "Enter the matrix: \n";

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    
    int swap_col1 = 0, swap_col2 = 0;

    cout << "Enter the number of the 2 columns you want to swap: \n";
    cin >> swap_col1 >> swap_col2;

    for (int i = 0; i < row; ++i)
    {
        int temp = matrix[i][swap_col1];
        matrix[i][swap_col1] = matrix[i][swap_col2];
        matrix[i][swap_col2] = temp;
    }

    
    cout << "Output: \n";

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}