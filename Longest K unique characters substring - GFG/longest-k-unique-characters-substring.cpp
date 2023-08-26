//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>mp;
    int count  = 0;
    int ans  = 0;
    int left = 0;
    for(int right = 0;right<s.size();right++)
    {
        mp[s[right]]++; // m[a] = 2 m[b] = 2 m[c] = 1  m[e] = 1;
        count++; // 5
        
        if(mp.size() > k)
        {
            while(mp.size() > k)
            {
                mp[s[left]]--;
                if(mp[s[left]] == 0)
                {
                    mp.erase(s[left]);
                }
                left++;
                count--;
            }
        }
        ans = max(ans,count);
        

    }
            if(mp.size() < k)
        {
            ans = -1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends