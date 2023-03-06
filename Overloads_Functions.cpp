#include <iostream>

double add(double x, double y)
{
    return x + y;
}

double add(double a, double b, double c)
{
    return a + b + c;
}

bool test(bool x)
{
    return x;
}

bool test(double x)
{
    return x > 0;
}

int main()
{
    double total = add(3,4);
    std::cout << "3 + 4 is " << total << '\n';

    auto totalofthree = add(1.1, 2.2, 3.3);
    std::cout << "1.1 + 2.2 + 3.3 is " << totalofthree << '\n';

    if (test(true))
    {
        std::cout << "true passes the test" << '\n';
    }

    if (test(3.2))
    {
        std::cout << "3.2 passes the test" << '\n';
    }

    return 0;
}