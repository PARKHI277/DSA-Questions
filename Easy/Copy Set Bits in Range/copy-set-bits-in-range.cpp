//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        int res = 0;
        for(int i = 0;i<32;i++)
        {
            if(i>= l-1 && i <= r-1)
            {
                int b1 = (1<<i) & y;
                int b2 = (1<<i) & x;
                if(b1 != 0 || b2 != 0)
                {
                    res += (1<<i);
                }
            }
            else
            {
                if(((1<<i) & x) != 0)
                {
                    res += (1<<i);
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends