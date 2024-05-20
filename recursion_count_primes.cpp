#include<iostream>
using namespace std;

bool is_prime(int num, int cur_test_number = 3)
{
    if (num == 2)
    {
        return true;
    }
    else if (num <= 1 || num % 2 == 0)
    {
        return false;
    }
    else if (num == cur_test_number)
    {
        return true;
    }
    else if (num % cur_test_number == 0)
    {
        return false;
    }
    else
    {
        return is_prime(num, cur_test_number + 1);
    }
}

int count_primes(int start, int end)
{
    if (start > end)
    {
        return 0;
    }
    int result = count_primes(start + 1, end);
    if (is_prime(start))
    {
        result += 1;
    }
    return result;
}
int main()
{
    int start = 10, end = 20;

    cout << count_primes(start, end);
}