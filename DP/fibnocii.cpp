#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// memorization - top down approch

int f(int n,vector<int>&dp)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}
int main()
{
    int n = 5;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp) << endl;
}

// tabulation approch - bottom up

int main()
{
    int n = 5;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n;i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n];
    return 0;

}


