#include<iostream>
#include <vector>
using namespace std;

int stack_sum(vector<int> &a)
{
    int sum = 0;
    for (auto value : a)
    {
        sum += value;
    }
    return sum;
}

int stack_3_max_sum(vector<int> stk1, vector<int> stk2, vector<int> stk3)
{
    int stk1_sum = stack_sum(stk1);
    int stk2_sum = stack_sum(stk2);
    int stk3_sum = stack_sum(stk3);

    while (!stk1.empty() && !stk2.empty() && !stk3.empty())
    {
        if (stk1_sum == stk2_sum && stk2_sum == stk3_sum)
        {
            return stk1_sum;
        }

        if (stk1_sum >= stk2_sum && stk1_sum >= stk3_sum)
        {
            stk1_sum -= stk1.back();
            stk1.pop_back();
             
        }
        else if (stk2_sum >= stk1_sum && stk2_sum >= stk3_sum)
        {
            stk2_sum -= stk2.back();
            stk2.pop_back();
        }
        else if (stk3_sum >= stk1_sum && stk3_sum >= stk2_sum)
        {
            stk3_sum -= stk3.back();
            stk3.pop_back();
        }
    }

    return 0;
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
	vector<int> b = {2, 2, 2, 4, 0};
	vector<int> c = {0, 3, 3, 5};

	cout<<stack_3_max_sum(a, b, c);

	return 0;
    return 0;
}