class Solution {
public:
    void findCom(int index , int target , vector<int>&nums, vector<vector<int>>&ans, vector<int>&ds)
    {
        if(index == nums.size())
        {
            if(target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(nums[index] <= target)
        {
            ds.push_back(nums[index]);
            findCom(index, target-nums[index],nums,ans,ds);
            ds.pop_back();
        }
        findCom(index+1,target,nums,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findCom(0,target,candidates,ans,ds);
        return ans;
    }
};