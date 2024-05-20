#include <iostream>
using namespace std;

int main()
{
    int s1 = -1, e1 = -1, s2 = -1, e2 = -1, is = -1, ie = -1, no_intc = -1;

    cout << "Enter Intervals";

    cin >> s1 >> e1 >> s2 >> e2;

    if ( s2 <= s1 && s1 <= e2)
    {
        is = s1;
    }
    else if (s1 <= s2 && s2 <= e1)
    {
        is = s2;
    }
    if (s1 <= e2 && e2 <= e1) 
    {
        ie = e2;
    }
    else if (s2 <= e1 && e1 <= e2)
    {
        ie = e1;
    }
    
    if ( is == ie)
    {
        cout << no_intc;
        return 0;
    }

    cout << is << " " << ie;
    return 0;
}