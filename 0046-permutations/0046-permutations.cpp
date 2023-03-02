class Solution {
public:
    
    void find(vector<int>&arr,vector<int>&nums,vector<vector<int>>&ans,int freq[])
    {    
        int n = nums.size();
        if(arr.size() == nums.size())
        {
            ans.push_back(arr);
            return;
        }
        for(int i = 0;i<n;i++)
        {
            if(!freq[i])
            {
                arr.push_back(nums[i]);
                freq[i] = 1;
                find(arr,nums,ans,freq);
                freq[i] = 0;
                arr.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;;
        vector<int>arr;
        int freq[n];
        for(int i = 0;i<n;i++)
        {
            freq[i] = 0;
        }
        
        find(arr,nums,ans,freq);
        return ans;
    }
};