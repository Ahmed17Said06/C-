#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;

bool is_valid_parentheses(string input)
{
    map<char,char> closed_parentheses;
    closed_parentheses[')'] = '(';
    closed_parentheses['}'] = '{';
    closed_parentheses[']'] = '[';

    stack<char> open_parentheses;
    for (char ch : input)
    {
        if(closed_parentheses.count(ch))
        {
            if(open_parentheses.empty())
            {
                return false;
            }

            char corr_open = closed_parentheses[ch];
            char curr_open = open_parentheses.top();

            if(corr_open != curr_open)
            {
                return false;
            }
            else
            {
                open_parentheses.pop();
            }            
        }
        else
        {
            open_parentheses.push(ch);
        }

    }
    return open_parentheses.empty();
}

int main()
{
    cout<<is_valid_parentheses("()")<<"\n";
	cout<<is_valid_parentheses("()()")<<"\n";
	cout<<is_valid_parentheses("(()())")<<"\n";
	cout<<is_valid_parentheses("{}{}")<<"\n";
	cout<<is_valid_parentheses("(((())))")<<"\n";
	cout<<is_valid_parentheses("([])")<<"\n";
	cout<<is_valid_parentheses("()[]{}")<<"\n";
	cout<<is_valid_parentheses("{[]}")<<"\n";

	cout<<is_valid_parentheses("(]")<<"\n";
	cout<<is_valid_parentheses("())")<<"\n";
	cout<<is_valid_parentheses("(][)")<<"\n";
	cout<<is_valid_parentheses("(]")<<"\n";
	cout<<is_valid_parentheses(" ([)]")<<"\n";

    return 0;
}
