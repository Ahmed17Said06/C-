#include<iostream>
#include<stack>
#include<vector>
using namespace std;


void next_greater_element(vector<int> &num)
{
    stack<int> stk;
    int len = num.size();

    for (int i = 0; i < len; ++i)
    {
        while(!stk.empty() && num[i] > num[stk.top()])
        {
            num[stk.top()] = num[i];
            stk.pop();
        }
        stk.push(i);
    }

    while(!stk.empty())
    {
        num[stk.top()] = -1;
        stk.pop();
    }
}

int main()
{
    vector<int> input = {10, 5, 7, 15, 11}; //{10, 5, 7, 15, 11}  {73, 74, 75, 71, 69, 72, 76, 73}
    next_greater_element(input);
    cout << "Output: ";
    for(int n : input)
    {
        cout << n << " ";
    }
    return 0;
}