//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        // Code here
        vector<pair<int,int>>v;
        for(auto it : intervals)
        {
            v.push_back({it[0],0});
            v.push_back({it[1],1});
        }
        sort(v.begin(),v.end());
        
        int m = v.size();
        int count = 0;
        int ans = -1;
        for(int i = 0;i<m;i++)
        {
            if(v[i].second == 0)
            {
                count +=  1;
            }
            if(count >= k)
            {
                ans = v[i].first;
            }
            if(v[i].second == 1)
            {
                count -= 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends