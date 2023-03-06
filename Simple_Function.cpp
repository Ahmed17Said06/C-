#include <iostream>

double add(double x, double y)
{
    return x + y;
}

int main()
{
    double total = add(3,4);
    std::cout << "3 + 4 is " << total << '\n';

    return 0;
}