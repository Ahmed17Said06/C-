#include<iostream>
using namespace std;

int main()
{
    int N = -1, M = -1;
    cout << "Enter N, & M. \n";
    cin >> N >> M;
    int matrix[N][M];

    int K = -1;
    cout << "Enter K.\n";
    cin >> K;

    int curr_row = 0, curr_col = 0;
    while (K--)
    {
        int direction = -1, steps = -1;
        int end_row = 0, end_col = 0;
        cout << "Enter the direction where 1:UP, 2:RIGHT, 3:DOWN 4:LEFT, then enter the number of the steps.\n";
        cin >> direction >> steps;
                    //u, r, d, l
        int di[4] = {-1, 0, 1, 0};
        int dj[4] = {0, 1, 0, -1};

        end_row = curr_row + steps * di[direction - 1];
        end_col = curr_col + steps * dj[direction - 1];

        while (end_row < 0)
        {
            end_row += N;
        }
        while (end_col < 0)
        {
            end_col += M;
        }

        if (end_row >= N)
        {
            end_row %= N;
        }
        if (end_col >= M)
        {
            end_col %= M;
        }
        
        curr_row = end_row;
        curr_col = end_col;

        cout << "output: " << "(" << curr_row <<", "<< curr_col <<")    \n";
    }

    return 0;
}