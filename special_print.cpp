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
    int ld = 0, rd = 0, lr = 0, lc = 0;

    int smallest_dim = row;
    if (col < row)
    {
        smallest_dim = col;
    }

    //sum of the left diagonal.
    for (int i = 0; i < smallest_dim; ++i)
    {
        ld += matrix[i][i];
    }
    //sum of the right diagonal.
    for (int i = 0; i < smallest_dim; ++i)
    {
        rd += matrix[i][col - 1 - i];
    }
    //sum of the last row.
    for (int i = 0; i < col; ++i)
    {
        lr += matrix[row - 1][i];
    }
    //sum of the last col.
    for (int i = 0; i < row; ++i)
    {
        lc += matrix[i][col - 1];
    }

    cout << "Output: \n";
    cout << ld << " " << rd << "\n";
    cout << lr << " " << lc << "\n";
    
    return 0;
}