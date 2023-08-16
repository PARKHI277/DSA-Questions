//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    const int MOD = 1000000007;
    int findCatalan(int n) 
    {
        //code here
        vector<int>catalan(n+1,0);
        catalan[0] = 1;
        for(int i = 0;i<=n;i++)
        {
            for(int j = 0;j<i;j++)
            {
                catalan[i] = (catalan[i] + (1LL * catalan[j] * catalan[i-j-1]) % MOD) % MOD;
            }
        }
        
        return catalan[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends