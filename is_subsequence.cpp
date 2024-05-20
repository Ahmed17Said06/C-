#include<iostream>
using namespace std;

int main()
{
    string input, str;
    cout << "Enter the input string: \n";
    getline(cin, input);
    cout << "Enter the str string: \n";
    getline(cin, str);

    int next_match = 0;
    for (int i = 0; i < input.length(); ++i)
    {
        if(input[i] == str[next_match])
        {
            next_match++;
        }
        if (next_match == str.length())
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}