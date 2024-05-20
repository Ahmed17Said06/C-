#include<iostream>
using namespace std;

int main()
{
    string S, T;
    cout << "Enter 2 strings.\n";
    getline(cin, S);
    getline(cin, T);

    int max_string = S.length();

    if (T.length() > S.length())
    {
        max_string = T.length();
    }

    for (int i = 0; i < max_string; ++i)
    {
        if (i < S.length())
        {
            cout << S[i];
        }
        if (i < T.length())
        {
            cout << T[i];
        }
    }

    return 0;
}