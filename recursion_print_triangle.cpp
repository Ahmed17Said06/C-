#include<iostream>
using namespace std;

void print_triangle_rev(int levels)
{
    if (levels == 0)
    {
        return;
    }

    for (int i = 0; i < levels; ++i)
    {
        cout <<"*";
    }
    cout << "\n";

    print_triangle_rev(levels - 1);
}


void print_triangle(int levels)
{

    if (levels == 0)
    {
        return;
    }

    print_triangle(levels - 1);

    for (int i = 0; i < levels; ++i)
    {
        cout <<"*";
    }
    cout << "\n";
}


int main()
{
    print_triangle(6);
    return 0;
}


