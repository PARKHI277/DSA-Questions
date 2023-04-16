//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        int n = arr.size();
        int count = 0;
        map<int,int>m;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            maxi = max(maxi,arr[i]);
            m[arr[i]]++;
        }
        
        for(int i = 0;i<n;i++)
        {
            if(m[arr[i]] > 1)
            {
                count++;
                continue;
            }
        
        for(int j = 1;j<=arr[i]/2;j++)
        {
            if((arr[i]%j == 0) && m[j] >=1 )
            {
                count++;
                break;
            }
        }
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends