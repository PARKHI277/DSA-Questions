#include <iostream>
#include <vector>
using namespace std;
vector<int> DistinctSum(vector<int>nums){
	    // Code here
	     int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    int n=nums.size();
    bool dp[n+1][sum+1]={false};
    for(int i=0;i<=n;i++){
        dp[i][0]=true;
    }
    for(int j=0;j<=sum;j++){
        dp[0][j]=false;
    }
    dp[0][0]=true;
  
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j>=nums[i-1]){
                dp[i][j]=dp[i-1][j] or dp[i-1][j-nums[i-1]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    vector<int>v;
    for(int j=0;j<=sum;j++){
        if(dp[n][j]){
            v.push_back(j);
        }
    }
    return v;
	}