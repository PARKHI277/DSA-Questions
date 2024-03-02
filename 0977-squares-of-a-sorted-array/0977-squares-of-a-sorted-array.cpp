class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int n = nums.size();
        vector<int>arr;
      
        for(int i = 0;i<n;i++)
        {
            int r = nums[i]*nums[i];
            arr.push_back(r);
        }
        sort(arr.begin(),arr.end());
        
        return arr;
    }
};


