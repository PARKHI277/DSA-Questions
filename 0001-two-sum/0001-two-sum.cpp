class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n = nums.size();
        for(int i  = 0;i<n;i++)
        {
            m[nums[i]] = i;
        }
        
        for(int i = 0;i<n;i++)
        {
            int c  = target-nums[i];
            if(m.count(c) && m[c] != i)
            {
                return {i,m[c]};
            }
        }
        
        return {};
    }
    
};


