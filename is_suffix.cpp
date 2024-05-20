#include<iostream>
using namespace std;

int main()
{
    string input, str;
    cout << "Enter the input string: \n";
    getline(cin, input);
    cout << "Enter the str string: \n";
    getline(cin, str);
    bool is_suffix = true;

    for (int i = 0; i < str.length(); ++i)
    {
        if (input[input.length() - 1 - i] != str[str.length() - 1 - i])
        {
            is_suffix = false;
            break;
        }
    }  

    if (is_suffix)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}