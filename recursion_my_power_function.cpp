#include<iostream>
using namespace std;

int my_pow(int value, int p = 2)
{
    if (p == 0)
    {
        return 1;
    }
    return my_pow(value, p - 1) * value;
}
int main()
{
    cout << my_pow(7, 3);
    return 0;
}