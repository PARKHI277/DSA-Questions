class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        priority_queue<int,vector<int>,greater<int>>m; // min heap
        for(int i = 0;i<k;i++) // 2 3
        {
            int element = nums[i];
            m.push(element);
            
        }
        for(int i = k;i<nums.size();i++)
        {
            int element = nums[i]; // 1
            if(element > m.top())
            {
                m.pop();
                m.push(element); // 5 6
            }
        }
        
        return m.top();
        
        
    }
};
