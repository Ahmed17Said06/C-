#include<iostream>
using namespace std;

int main()
{
    int N = -1, M = -1;
    cout << "Enter N, & M. \n";
    cin >> N >> M;
    int matrix[N][M];
            //  { d, r,  u,  l, ul, dr, ur, dl};
    int di[8] = {1, 0, -1, 0, -1, 1, -1, 1};
    int dj[8] = {0, 1, 0, -1, -1, 1, 1, -1};

    cout << "Enter the matrix.\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            bool is_valid_mountain = true;
            for (int d = 0; d < 8 && is_valid_mountain; ++d)
            {
                int ni = i + di[d];
                int nj = j + dj[d];

                if (ni >= N || ni < 0 || nj >= M || nj <0)
                {
                    continue; //outside border
                }
                if (matrix[i][j] <= matrix[ni][nj])
                {
                    is_valid_mountain = false;
                    break;
                }
            }
            if (is_valid_mountain)
            {
                cout << matrix[i][j] << " at positions " << i << " " << j << "\n"; 
            }
        }
    }
    return 0;
}