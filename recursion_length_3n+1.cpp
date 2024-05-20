#include<iostream>
using namespace std;

int count = 0;

int length_sequence(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
         
        return 1 + length_sequence(n / 2);
    }
    else
    { 
        return 1 + length_sequence(3 * n + 1);
    }
}

int main()
{
    cout << length_sequence(6);
    return 0;
}