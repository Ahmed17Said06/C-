#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;


class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        int size = difficulty.size();
        for (int i = 0; i < size; ++i)
        {
            jobs.push_back({difficulty[i], profit[i]});

        }
        
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());

        int maxProfitSofar = 0, total_profit = 0, job = 0;

        for (int i = 0; i < (int)worker.size(); ++i)
        {
            for (job; job < (int)jobs.size() && worker[i] >= jobs[job].first; ++job)
            {
                maxProfitSofar = max(maxProfitSofar, jobs[job].second);
            }
            total_profit += maxProfitSofar;
        }
        return total_profit;
    }
};





int main()
{
    vector<int> difficulty {2,4,6,8,10};
    vector<int> profit {10,20,30,40,50};
    vector<int> worker {4,5,6,7};

    Solution solution;

    cout << solution.maxProfitAssignment(difficulty, profit, worker);

    return 0;
}