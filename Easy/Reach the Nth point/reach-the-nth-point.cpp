//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    
		    int m  = 1e9 + 7;
		    if(n == 1)
		    {
		        return 1;
		    }
		    
		    
		    int prev = 1;
		    int prev2 = 1;
		    
		    for(int i = 2;i<=n;i++)
		    {
		        int c =  (prev + prev2) % m;
		        prev2 = prev;
		        prev = c;
		    }
		    
		    return prev;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends