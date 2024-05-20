#include<iostream>
using namespace std;


bool is_prefix(string main, string prefix, int start_pos = 0)
{
    if(start_pos >= prefix.length())
    {
        return true;
    }
    else if (main[start_pos] == prefix[start_pos])
    {
        return is_prefix(main, prefix, start_pos + 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string main, prefix;
    cout <<"Enter the main string.\n";
    getline(cin, main);

    cout << "Enter the prefix.\n";
    getline(cin, prefix);


    if (is_prefix(main, prefix))
    {
        cout << "True. \n";
    }
    else
    {
        cout << "False. \n";
    }

    return 0;
}