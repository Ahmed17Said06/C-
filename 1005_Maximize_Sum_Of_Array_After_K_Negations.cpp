#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum = 0;
        int mn = INT_MAX;

        int size = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < size; ++i)
        {
            if(k && nums[i] < 0)
            {
                nums[i] *= -1;
                k--;
            }
            sum += nums[i];
            mn = min(mn, nums[i]);
        }

        if (k % 2)
        {
            sum -= (2 * mn);
        }

        return sum;
    }
};

