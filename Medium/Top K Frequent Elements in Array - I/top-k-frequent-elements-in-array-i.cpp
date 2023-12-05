//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code herebv
        unordered_map<int,int>mp;
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(int v : nums)
        {
            mp[v]++; // m[1] = 3 m[2] = 2 , m[3] = 1
        }
        
        for(auto v : mp)
        {
            pq.push({v.second,v.first}); // (3,1) , (2,2) , (1,3)
            
        }
        
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends