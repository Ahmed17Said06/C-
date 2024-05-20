#include<iostream>
using namespace std;

// int main()
// {
//     int n = -1, m = -1, w = -1;

//     int cnt = 0;

//     cin >> n >> m >> w;
//     if (n > m)
//     {
//         int temp = n;
//         n = m;
//         m = temp;
//     }

//     for (int c = 1; c <= w; c++)
//     {
//         for (int i = 1; i <= m; i++)
//         {
//             if ((c - i) < n && (c - i) >= 1)
//             {
//                 cout << c << " " << i << " " << (c - i) << "\n";
//                 cnt++;
//             }
//         }
//     }
//         cout << cnt;
//     return 0;
// }

// int main ()
// {
//     int n, m, w;

//     cin >> n >> m >> w;

//     int cnt = 0;

//     for (int i =1; i <= n; ++i)
//     {
//         for (int j = i; j <= m; ++j)
//         {
//             for (int k = 1; k <= w; ++k)
//             {
//                 if (i + j <= k)
//                 {
//                     cout << k << " "<< i << " "<< j << "\n";
//                     cnt++;
//                 }
                
//             }
//         }
//     }
//     cout << cnt << "\n";
//     return 0;
// }