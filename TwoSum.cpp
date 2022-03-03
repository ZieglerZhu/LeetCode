#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        vector<int> twoSum(vector<int>& nums, int target)
        {
            int n=nums.size();
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        return {i,j};
                    }
                }
            }
            return {};
        }
};

int main()
{
    // Solution test;
    // vector<int> nums={2,7,11,15};
    // int target = 9;
    // vector<int> result=test.twoSum(nums,target);
    // for (auto i : result)
    // {
    //     cout<<i<<endl;
    // }
    
    // return 0;
}