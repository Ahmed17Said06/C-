#include<iostream>
using namespace std;

int main()
{
    string from = "abcdefghijklmnopqrstuvwxyz0123456789";
    string to = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

    char map_letter[150] = {0};
    for (int i = 0; i < from.length(); ++i)
    {
        map_letter[from[i]] = to[i];
    }

    string str;
    cout << "Enter String: \n";
    cin >> str;

    for(int i = 0; i < str.length(); ++i)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            continue;
        }
        str[i] = map_letter[str[i]];
    }
    cout << "Output: " << str;
    return 0;
}