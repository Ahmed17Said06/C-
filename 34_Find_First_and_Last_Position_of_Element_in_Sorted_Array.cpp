#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class Solution {
public:
    int BSfindFirst(vector<int> &nums, int target)
    {
        int start = 0;
        int end = (int) nums.size() - 1;
        int position = -1;

        while(start <= end)
        {
            int mid = (start + end) / 2;
            if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                position = mid;
                end = mid - 1; //find smaller in left
            }
        }
        return position;
    }

    int BSfindLast(vector<int> &nums, int target)
    {
        int start = 0;
        int end = (int) nums.size() - 1;
        int position = -1;
        
        while (start <= end)
        {
            int mid = (start + end) / 2;

            if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                position = mid;
                start = mid + 1; //find higher in right
            }  
        }
        return position;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {BSfindFirst(nums, target), BSfindLast(nums, target)};
    }
};