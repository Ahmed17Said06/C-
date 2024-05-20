#include<iostream>
#include<stack>
using namespace std;

string removeDuplicates(string S)
{
    string result;
    int string_length = S.length();
    stack<char> stk;

    for (int i = 0; i < string_length; ++i)
    {
        if (stk.empty() || stk.top() != S[i])
        {
            stk.push(S[i]);
        }
        else
        {
            stk.pop();
        }
    }

    while(!stk.empty())
    {
        result = stk.top() + result;
        stk.pop();
    }

    return result;
}


int main()
{
    cout << removeDuplicates("abbaca") << "\n";
	return 0;
}