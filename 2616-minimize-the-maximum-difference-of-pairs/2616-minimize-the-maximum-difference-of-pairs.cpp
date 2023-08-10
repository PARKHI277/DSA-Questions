class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        if(nums.size() == 0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = nums[nums.size()-1] - nums[0];
        int ans = 0;
        while(end >= start)
        {
            int mid = (end+start)/2;
            int count = 0;
            for(int i = 0 ;i<nums.size()-1;)
            {
                if(nums[i+1] - nums[i] <= mid)
                {
                    count++;
                    i += 2;
                }
                else
                {
                    i++;
                }
            }
            if(count >= p)
            {
                ans = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        
        return ans;
        
    }
};