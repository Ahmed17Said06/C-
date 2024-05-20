#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

//O(nlogn) time and O(n) space

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {

        vector<float> arrival_time;
        int size = dist.size();

        for(int i = 0; i < size; ++i)
        {
            arrival_time.push_back(float (dist[i])/speed[i]);
        }

        sort(arrival_time.begin(), arrival_time.end());

        int ans = 0;

        for(int i = 0; i < size && i < arrival_time[i]; ++i)
        {
            ans++;
        }

        return ans;
    }
};


class Solution {
public:
    int eliminateMaximum2(vector<int>& dist, vector<int>& speed) {
        int size = dist.size();
        vector<int> arrival_time(size);

        for(int i = 0; i < size; ++i)
        {
            if(dist[i] % speed[i] == 0)
            {
                arrival_time[i] = dist[i] / speed[i];
            }
            else
            {
                arrival_time[i] = dist[i] / speed[i] + 1;
            }
            
        }

        sort(arrival_time.begin(), arrival_time.end());

        int ans = 0;

        for(int i = 0; i < size && i < arrival_time[i]; ++i)
        {
            ans++;
        }

        return ans;
    }
};



int main()
{
    vector<int> dist {1, 3, 4};
    vector<int> speed {1, 1, 1};

    Solution solution;
    cout << solution.eliminateMaximum2(dist, speed);

    return 0;
}