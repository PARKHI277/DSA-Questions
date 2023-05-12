class Solution {
public:
    long long find(int index,vector<vector<int>>&questions,vector<long long>&dp)
    {
        if(index >= questions.size())
        {
            return 0;
        }
        if(dp[index]  != -1)
        {
            return dp[index];
        }
        
        long long take = questions[index][0] + find(index + questions[index][1] + 1,questions,dp);
        long long leave = find(index+1,questions,dp);
        
        return dp[index] = max(take,leave);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long>dp(questions.size(),-1);
        return find(0,questions,dp);
    }
};