//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void push_to_vec(vector<int>&res , int N)
    {
        if(N<=0)
        {
            res.push_back(N);
            return;
        }
        res.push_back(N);
        push_to_vec(res,N-5);
        res.push_back(N);
        return;
    }
    vector<int> pattern(int N){
        // code here
        vector<int>res;
        push_to_vec(res,N);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends