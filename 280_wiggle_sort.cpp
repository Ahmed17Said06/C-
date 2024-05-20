#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


// O(nlogn) time O(1) space
void wiggleSort2(vector<int> &nums)
{
    int size = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 1; i + 1 < size; i+=2)
    {
        swap(nums[i], nums[i + 1]);
    }
}

//O(n^2) in worst case, O(1) space
void wiggleSort(vector<int> &nums)
{
    int size = nums.size();
    for (int i = 1; i < size - 1; i += 2)
    {
        while (nums[i - 1] > nums[i] || nums[i] < nums[i + 1])
        {
            if (nums[i - 1] > nums[i])
            {
                swap(nums[i - 1], nums[i]);
            }
            else if(nums[i] < nums[i + 1])
            {
                swap(nums[i], nums[i + 1]);
            }
        }
    }
}


int main()
{
    vector<int> nums {6, 6, 5, 6, 3, 8}; //3, 5, 2, 1, 6, 4

    wiggleSort(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}