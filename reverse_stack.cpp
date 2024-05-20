#include<iostream>
#include<stack>
using namespace std;

void insert_at_bottom_stack (stack<int> &stk, int val)
{
    if(stk.empty())
    {
        stk.push(val);
    }
    else
    {
        int temp = stk.top();
        stk.pop();
        insert_at_bottom_stack(stk, val);

        stk.push(temp);
    }

}

void reverse(stack<int> &stk)
{
    if(stk.empty())
    {
        return;
    }

    int temp = stk.top();
    stk.pop();
    reverse(stk);
    insert_at_bottom_stack(stk, temp);
}


int main()
{
    int n = 4;
    stack<int> stk;

    cout << "Enter Om el Stack.\n";

    for(int i = 0; i < n; ++i)
    {
        int temp;
        cin >>  temp;
        stk.push(temp);
    }

    cout << "Stack entered. \n";
    // insert_at_bottom_stack(stk, 10);

    reverse(stk);
    while(!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    return 0;
    }