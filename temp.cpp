#include<iostream>
#include<deque>
#include<vector>

using namespace std;

vector<int> sliuding_win_max(vector<int> &nums, int k)
{
	vector<int> output {};
	deque<int> q {};

	int ridx = 0, lidx = 0;

	while (ridx < (int)nums.size())
	{
		while(!q.empty() && nums[q.front()] < nums[ridx])
		{
			q.pop_front();
		}
		q.push_back(ridx);

		if(lidx > q.front())
		{
			q.pop_front();
		}

		if(ridx + 1 >= k)
		{
			output.push_back(nums[q.front()]);
			lidx++;
		}

		ridx++;
	}


	return output;
}
 

int main() 
{
	vector<int> a = {1,3,-1,-3,5,3,6,7};
	a = sliuding_win_max(a, 3);

	for (int x : a)
		cout<<x<<" "; 
	return 0;
}