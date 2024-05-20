#include<iostream>
#include<stack>
#include<queue>
using namespace std;

struct ourStack 
{
    queue<int> q;

    void push(int val)
    {
        int current_size = q.size();
        q.push(val);

        while(current_size--) // this the size before pushing the last element and this gurantees the last value to be on the frot of the queue.
         {
            q.push(q.front());
            q.pop();
        }
    }

    void pop()
    {
        if (!q.empty())
        {
            q.pop();
        }
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }

};

int main()
{
    ourStack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}