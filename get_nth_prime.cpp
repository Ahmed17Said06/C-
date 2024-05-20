#include<iostream>
using namespace std;

bool is_prime(int num)
{
    bool prime = true;
    if (num < 2)
    {
        prime = false;
        return prime; 
    }
    else if (num == 2)
    {
        return prime;
    }

    for(int i = 2; i <= num/2; ++i)
    {
        if (num % i == 0)
        {
            prime = false;
            return prime; 
        }
    }

    return prime;
}

int nth_prime(int n)
{
    int counter = 0, last_prime = 0;
    while(counter != n)
    {
        for (int i = last_prime + 1; i < INT_MAX; ++i)
        {
            if (is_prime(i))
            {
                counter++;
                last_prime = i;
                break;
            }
        }
    }
    return last_prime;
}

int main()
{
    cout << "Enter number.\n";
    int n;
    cin >> n;

    cout << nth_prime(n) << "\n";
    return 0;
}