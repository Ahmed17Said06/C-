#include<iostream>
using namespace std;

int main()
{
    string first, second;
    cout << "Enter the first string.\n";
    getline (cin,first);
    cout << "Enter the second string.\n";
    getline (cin,second);

    int equal = 0;

    int smaller_length = first.length();
    if(second.length() < first.length())
    {
        smaller_length = second.length();
    }

    for (int i = 0; i < smaller_length; ++i)
    {
        if(equal != 0)
        {
            break;
        }
        if(first[i] > second[i])
        {
            equal = 1;
        }
        else if(first[i] < second[i])
        {
            equal = -1;
        }
    }
    if(equal == 0)
    {
        if(first.length() > second.length())
        {
            equal = 1;
        } 
        else if(first.length() < second.length())
        {
            equal = -1;
        }
    }

    if(equal == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}