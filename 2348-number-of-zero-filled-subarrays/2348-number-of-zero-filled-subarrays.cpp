class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        int n = nums.size();
        long long curr = 0;
        long long total  = 0;
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                curr++;
                total += curr;
            }
            else
            {
                curr = 0;
            }
        }
        
        return total;
    }
};