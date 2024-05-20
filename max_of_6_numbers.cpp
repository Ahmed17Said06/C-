#include<iostream>
using namespace std;


int max(int a, int b, int c)
{
    return max(a, max(b, c));
}

int max(int a, int b, int c, int d)
{
    return max(a, max(b, c, d));
}

int max(int a, int b, int c, int d, int e)
{
    return max(a, max(b, c, d, e)); 
}

int max(int a, int b, int c, int d, int e, int f)
{
    return max(a, max(b, c, d, e, f));
}


int main()
{
    int a = 100, b = 300, c = 500, d = 50, e = 90, f = 900;
    cout << a << "\t"<< b << "\t"<< c << "\t"<< max (a, b, c) << "\n";

    cout << a << "\t"<< b << "\t"<< c << "\t"<< d << "\t" << max (a, b, c, d) << "\n";

    cout << a << "\t"<< b << "\t"<< c << "\t"<< d << "\t" << e << "\t" << f << "\t" << max (a, b, c, d, e, f) << "\n";    

    return 0;
}