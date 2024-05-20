#include<iostream>
using namespace std;

int main()
{
    string input, str;
    cout << "Enter the input string: \n";
    getline(cin, input);
    cout << "Enter the str string: \n";
    getline(cin, str);
    bool is_substring = false;

    for (int i = 0; i <= input.length() - str.length(); ++i)
    {
        int count = 0;
        for (int j = 0; j < str.length(); ++j)
        {
            if(input[i + j] == str[j]) //try to use the way round with assuning yes, till it didn't match then make it no.
            {
                count ++;
            }
            else
            {
                break;
            }
        }
        if (count == str.length())
        {
            is_substring = true;
            break;
            
        } 
    }  

    if (is_substring)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}