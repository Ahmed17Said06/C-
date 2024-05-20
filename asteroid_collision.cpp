#include<iostream>
#include<stack>
#include<vector>

using namespace std;

stack<int> asteroid_collision(vector<int> &asteroids)
{
    stack<int> right_asteroids;

    for (int s_asteroid : asteroids)
    {
        while(!right_asteroids.empty() && s_asteroid < 0 && right_asteroids.top() > 0)
        {
            int diff = s_asteroid + right_asteroids.top();
            if (diff < 0)
            { 
                right_asteroids.pop();
            }
            else if(diff > 0)
            {
                s_asteroid = 0;
            }
            else
            {
                right_asteroids.pop();
                s_asteroid = 0;
            }
        }
        if (s_asteroid)
        {
            right_asteroids.push(s_asteroid);
        }
    }
    
    return right_asteroids;
}

int main()
{
    vector<int> asteroids = {5,10,-5}; //{8, -8} {5, 10, -5} 
    stack<int> temp = asteroid_collision(asteroids);
    vector<int> output_ordered;

    while (!temp.empty())
    {
        output_ordered.push_back(temp.top());
        temp.pop();
    }

    for(int n : output_ordered)
    {
        cout << n << " ";
    }
    return 0;
}