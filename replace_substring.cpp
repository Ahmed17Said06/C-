#include<iostream>
using namespace std;

bool starts_with(string str, string pattern, int pos)
{
    bool exists = false;
    
    if (pos + pattern.length() > str.length() - 1)
    {
        return exists;
    }
    else
    {
        for (int i = 0; i < pattern.length(); ++i)
        {
            if(str[pos + i] != pattern[i])
            {
                return exists;
            }
        }

        exists = true;
    }
    return exists;
}

string replace_str (string input, string pattern, string to)
{
    string output;
    for (int i = 0; i < input.length(); i)
    {
        if (starts_with (input, pattern, i))
        {
            output += to;
            i += pattern.length(); 
        }
        else
        {
            output += input[i];
            ++i;
        }
    }
    return output;
}

int main()
{
    cout << "Enter string, then pattern, then new pattern.\n";
    string input, pattern, to;

    getline(cin, input);
    getline(cin, pattern);
    getline(cin, to);

    cout << "\n" << replace_str(input, pattern, to);

    return 0;
}