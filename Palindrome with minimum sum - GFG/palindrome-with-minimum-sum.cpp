//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
      bool checkPalindrome(string &str){
        int l=0,h=str.size()-1;
        while(l<h){
            if((str[l]==str[h])||(str[l]=='?'||str[h]=='?')){
                if(str[l]=='?'){
                    str[l]=str[h];
                }
                else if(str[h]=='?'){
                    str[h]=str[l];
                }
                l++;
                h--;
            }
            else if(str[l]!=str[h]){
                return false;
            }
        }
        return true;
    }
    int minimumSum(string str) {
        // code here
        if(checkPalindrome(str)==false){
            return -1;
        }
        int ans=0;
        char prev='0';
        for(int i=0;i<str.size();i++){
            if(str[i]!='?'&&prev!='0'){
                ans+=abs(str[i]-prev);
                prev=str[i];
            }
            else if(str[i]!='?'){
                prev=str[i];
            }
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

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends