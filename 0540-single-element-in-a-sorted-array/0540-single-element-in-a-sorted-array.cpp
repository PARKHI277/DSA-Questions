class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i =0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int result;
        
        for(auto i : m)
        {
            if(i.second == 1)
            {
              result = i.first;
            }
        }
        
        return result;
    }
};