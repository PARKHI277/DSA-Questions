class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long n = size(nums), i = 0, j = n-1,ans = 0;
         while(i<j)  ans += stoi((to_string(nums[i++])+to_string(nums[j--])));
         if(i==j) ans+=(int)(nums[i]);
         return ans;  
    }
};