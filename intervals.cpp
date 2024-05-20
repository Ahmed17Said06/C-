#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    int numberOfintervals = 0;
    int s1, e1, s2, e2, s3, e3 = -1;

    cout << "Enter X \n";
    cin >> x;

    cout << "Enter intevrals";
    cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

    if (s1 < x && e1 > x)
    {
        numberOfintervals += 1;
    } 
    if (s2 < x && e2 > x)
    {
        numberOfintervals += 1;
    } 
    if (s3 < x && e3 > x)
    {
        numberOfintervals += 1;
    } 
    cout << "number of intervals that x is part of " << numberOfintervals;

    return 0;
}
