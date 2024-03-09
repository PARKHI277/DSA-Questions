//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
             int x = s.size();
             while(r--)
             {
                 string t = "";
                 for(int i = 0;i<=n;i++)
                 {
                      if(s[i] == '0')
                      {
                          t.push_back('0');
                          t.push_back('1');
                      }
                      else
                      {
                          t.push_back('1');
                          t.push_back('0');
                      }
                 }
                 
                 s = t;
                 
                 
             }
             return s[n];
             
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends