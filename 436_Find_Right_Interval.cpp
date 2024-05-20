#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class Solution {
public:
    int BSfindFirst(vector<vector<int>> &startings, int val)
    {
        int start = 0; 
        int end = (int)startings.size() - 1;
        int position = -1;

        while(start <= end)
        {
            int mid = (start + end) / 2;
            if(startings[mid][0] < val)
            {
                start = mid + 1;
            }
            else if (startings[mid][0] >= val)
            {
                position = mid;
                end = mid - 1;
            }
        }

        return position; 
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<vector<int>> startings;
        for(int i = 0; i < (int)intervals.size(); ++i)
        {
            startings.push_back({intervals[i][0], i});
        }
        sort(startings.begin(), startings.end());

        vector<int> ans(intervals.size(), -1);
        for(int i = 0; i < (int)intervals.size(); ++i)
        {
            int idx = BSfindFirst(startings, intervals[i][1]);
            if (idx != -1)
            {
                ans[i] = startings[idx][1];
            }
        }
        return ans;
    }
};