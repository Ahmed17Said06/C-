#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

//O(n^2log(n))

class Solution {
public:
    int BSfindFirst(vector<int> &nums, int start, int val)
    {
        int end = (int)nums.size() - 1;
        int position = nums.size();

        while(start <= end)
        {
            int mid = (start + end) / 2;

            if(nums[mid] < val)
            {
                start = mid + 1;
            }
            else
            {
                position = mid;
                end = mid - 1;
            }
        }

        return position;
    }
    int triangleNumber(vector<int>& nums) {
        int ans = 0;
        int size = (int)nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < size - 2; ++i)
        {
            int k = i + 2;
            for(int j = i + 1; j < size - 1 && nums[i] != 0; ++j)
            {
                int first_idx = BSfindFirst(nums, k, nums[i] + nums[j]);
                ans += first_idx - j - 1;
            }
        }

        return ans;
    }
};