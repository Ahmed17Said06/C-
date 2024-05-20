//solve again with piriority queue
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> sliding_window_max(vector <int> &nums, int k)
{
    vector <int> output;
    deque <int> q;
    int l_idx = 0, r_idx = 0;
    int nums_size = nums.size();

    while (r_idx < nums_size)
    {
        //pop smaller values from q.
        while(!q.empty() && nums[q.back()] < nums[r_idx])
        {
            q.pop_back();
        }
        q.push_back(r_idx);
        // remove left value from window
        if (l_idx > q.front())
        {
            q.pop_front();
        }

        // add max value of the window to the output
        if (r_idx + 1 >= k)
        {
            output.push_back(nums[q.front()]);
            l_idx++;
        }
        r_idx++;
    }

    return output;
}


int main()
{
    vector<int> a = {1,3,-1,-3,5,3,6,7};
	a = sliding_window_max(a, 3);

	for (int x : a)
		cout<<x<<" ";
    return 0;
}