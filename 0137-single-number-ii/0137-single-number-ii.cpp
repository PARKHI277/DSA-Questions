class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto it : nums)
        {
            m[it]++;
        }
        int ans;
        for(auto i : m)
        {
            if(i.second == 1)
            {
               ans = i.first;
            }
        }
        
        return ans;
    }
};