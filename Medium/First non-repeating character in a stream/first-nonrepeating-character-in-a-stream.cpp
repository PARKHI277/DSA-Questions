//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		   string ans(A.length(),'#');
    map<char,int> mpp;
    queue<char>q;
    for(int i=0;i<A.length();i++)
    {
        mpp[A[i]]++;
        if(mpp[A[i]]==1)
        {
            q.push(A[i]);
        }
        while(!q.empty() && mpp[q.front()]>1)
        {
          q.pop(); 
        }
        if(!q.empty())
        {
            ans[i]=q.front();
        }
        
    }
    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends