#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int LPT = 0;
        int size = (int) nums.size();

        if((int) nums.size() < 3)
        {
            return LPT;
        }

        sort(nums.rbegin(), nums.rend());
        for(int i = 0; i < size - 2 ; ++i)
        {
            
            if(nums[i] < nums[i + 1] + nums[i + 2])
            {
                // one check is enough as they are sorted.
                LPT += nums[i] + nums[i + 1] + nums[i + 2];
                return LPT;
            }
        }
        
        return LPT;
    }
};


int main()
{
    
    return 0;
}