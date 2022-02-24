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
    // int num[] = {2,7,11,15};
    // vector<int> nums(4,num[0]);
    // int target = 9;
    // test.twoSum(nums,target);

    return 0;
}