//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    bool ispalindrome(string &s, int i, int j)
    {
        if (s[i] == '0') return false;  
        long long num = 0;
        for (int k = i; k <= j; k++)num = num * 2 + (s[k] - '0');
        while (num > 1) 
        {
            if (num % 5 != 0) return false;
            num /= 5;
        }
        return true;
  }
    
    
    long long int solve(string &str, int i, int j, vector<long long int>&dp)
    {
        //cout<<"hi"<<endl;
        if(i>=j) return 0;
        
        if(ispalindrome(str, i, j)) return 0;
        
        if(dp[i]!=-1) return dp[i];
        
        long long int ans=INT_MAX;
        for(int k=i; k<j; k++)
        {
            long long int a,b;

            if(ispalindrome(str, i, k))//no need further partition required of left part
            {
                int a;
                if(dp[k+1]!=-1)  a=dp[k+1];
                else
                {
                    a=solve(str, k+1, j, dp);
                }
                long long int temp = 1LL+a;
                
                // //cout<<"hi"<<endl;

                ans=min(ans,temp);
            }

        }
        return dp[i]=ans;
        
    }

    int cuts(string str){
        
        vector<long long int>dp(str.size()+1,-1);
        
        if(solve(str, 0, str.size()-1, dp)==INT_MAX)// || solve(str, 0, str.size()-1, dp)<=0)
        {
            return -1;
        }
        return solve(str, 0, str.size()-1, dp)+1;
        //code
        
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   string s;
   while(t--)
   {
    cin>>s;
    Solution obj;
    int res=obj.cuts(s);
    cout<<res<<endl;

   }


    return 0;
}

// } Driver Code Ends