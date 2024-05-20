#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


// O(n) time O(1) space
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int size = nums.size();
        int left_ptr = -1;
        int right_ptr = -1;


        for (int i = 1; i < size; ++i)
        {
            if (left_ptr == -1 && nums[i - 1] > nums[i])
            {
                left_ptr = i - 1;
            }

            if (right_ptr == -1 && nums[size - i] < nums[size - 1 - i])
            {
                right_ptr = size - i;
            }

            if(right_ptr != -1 && left_ptr != -1)
            {
                break;
            }
        }
        if(right_ptr != -1 && left_ptr != -1)
        {
            return (right_ptr - left_ptr + 1);
        }
        return 0;      
    }
};


//O(nlogn) time O(n) space
class Solution2 {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int size = nums.size();
        int left = -1;
        int right = -1;
        vector<int> sorted = nums;

        sort(sorted.begin(), sorted.end());

        for(int i = 0; i <= size/2; ++i)
        {
            if (left == -1 && nums[i] != sorted[i])
            {
                left = i;
            }
            else if(nums[i] != sorted[i])
            {
                right = i;
            }
        }

        if(left == -1)
        {
            return 0;
        }

        return right - left + 1;
        
    }
};


int main()
{
    vector<int> input  {1,3,2,2,2}; //{1, 3, 2, 4, 5} //2,6,4,8,10,9,15 1,2,3,4  1,3,2,2,2

    Solution solution;
    
    cout << solution.findUnsortedSubarray(input) << "\n";

    Solution2 solution2;
    
    // cout << solution2.findUnsortedSubarray(input) << "\n";

    return 0;
}