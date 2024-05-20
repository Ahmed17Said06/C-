#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

void reverse_queue(queue<int> &q)
{
    stack<int> stk;

    while(!q.empty())
    {
        stk.push(q.front());
        q.pop();
    }
    while(!stk.empty())
    {
        q.push(stk.top());
        stk.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    reverse_queue(q);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}