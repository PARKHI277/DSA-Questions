//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N == 0)
        {
            return -1;
        }
        int count = 0;
        int pos = 0;
        while(N)
        {
            if(N & 1)
            {
                count++;
            }
            pos++;
            N = N>>1;
        }
        
        return count == 1 ? pos : -1;
    }
    
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends