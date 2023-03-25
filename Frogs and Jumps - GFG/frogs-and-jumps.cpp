//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
         bool mp[leaves+1];
        for(int i=0;i<leaves+1;i++)
        {
            mp[i] = false;
        }
        int res = leaves;
        
        for(int i=0;i<N;i++)
        {
            int strength = frogs[i];
            int t = strength;
            if(t <= leaves && mp[t]==false){
            while(t<=leaves)
            {
                if(mp[t]==false)
                res--;
                
                mp[t] = true;
                t += strength;
            }
            }
        }
        
        return res;
        
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends