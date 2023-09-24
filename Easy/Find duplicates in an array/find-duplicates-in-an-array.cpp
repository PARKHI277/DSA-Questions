//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        vector<int>ans;
        for(int i = 0;i<n-1;i++)
        {
            if(arr[i] == arr[i+1])
            {
                ans.push_back(arr[i]);
                int index = -1;
                int low = i+1 , high = n-1;
                while(low <=high)
                {
                    int mid = (low + high)/2;
                    if(arr[mid] == arr[i])
                    {
                        index = mid;
                        low = mid+1;
                    }
                    else if(arr[mid]  > arr[i])
                    {
                        high = mid-1;
                    }
                    else
                    {
                        low = mid+1;
                    }
                }
                i = index;
            }
        }
        if(ans.size() == 0)
        {
            return {-1};
            
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends