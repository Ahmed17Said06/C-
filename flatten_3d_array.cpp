#include<iostream>
using namespace std;


int main()
{
    int Depth, Rows, Cols, Type; //numbers of depth, rows, columns
    int current_depth, current_row, current_col, idx; //current no of each.

    cout << "Enter 3 numbers: Depth, Rows, Cols the dimensions of 3D array.\n";
    cin >> Depth >> Rows >> Cols;

    cout << "Enter 1 for converting from 3D to 1D, or 2 for 1D to 3D\n";
    cin >> Type;

    int Db = Rows * Cols;

    if(Type == 1)
    {
        cout << "Enter the position (d, r, c).\n";
        cin >> current_depth >> current_row >> current_col;
        idx = current_depth * Db + current_row * Cols + current_col;
        cout << idx << "\n";
    }
    else
    {
        cout << "Enter idx to convert it to 3D position.\n";
        cin >> idx;

        current_depth = idx / Db;
        current_row   = (idx % Db) / Cols;
        current_col   = (idx % Db) % Cols;

        cout << current_depth << " " << current_row << " " << current_col <<"\n";
    }
}