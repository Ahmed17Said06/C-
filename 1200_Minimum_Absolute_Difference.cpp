#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int absMin = INT_MAX;
        vector<vector<int>> output;
        sort(arr.begin(), arr.end());

        for(int i = 0; i < (int)arr.size() - 1; ++i)
        {
            int diff = abs(arr[i + 1] - arr[i]);
            if (diff < absMin)
            {
                absMin = abs(arr[i + 1] - arr[i]);
            }
        }
        for (int i = 0, j = 0; i < (int)arr.size() - 1; ++i)
        {
            int diff = abs(arr[i + 1] - arr[i]);
            if (diff == absMin)
            {
                output.push_back({arr[i], arr[i + 1]});
            }
        }
        return output;
    }
};


int main()
{
    vector<int> arr = {4,2,1,3};

    Solution solution;

    vector<vector<int>> result = solution.minimumAbsDifference(arr);

    for (vector<int> row : result)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
        cout << "\n";
    }

    return 0;
}