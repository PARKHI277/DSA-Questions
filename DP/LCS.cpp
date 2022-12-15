#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int helper(string &s1, string &s2, int m, int n, vector<vector<int>>& dp){
        if(m == 0 || n == 0){
            return 0;
        }
        if(dp[m][n] != -1){
            return dp[m][n];
        }
        if(s1[m-1] == s2[n-1]){
            return dp[m][n] = (1 + helper(s1, s2, m-1, n-1, dp));
        }else{
            return dp[m][n] = max(helper(s1, s2, m-1, n, dp), helper(s1, s2, m, n-1, dp));
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return helper(text1, text2, m, n, dp);
    }

    int main()
    {
        string st1, st2;
        cin >> st1 >> st2;
        int l = longestCommonSubsequence(st1, st2);
        cout << l << endl;
    }