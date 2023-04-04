//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
  int ca =0;
  int cb = 0;
  int cnta = 0;
  int cntb = 0;
  int i = 0;
  while(i<str.size())
  {
      while(str[i] == 'a' && i < str.size())
      {
          i++;
          ca++;
      }
      while(str[i] == 'b' && i < str.size())
      {
          i++;
          cb++;
      }
      if(ca > 0)
      {
          cnta++;
          ca = 0;
      }
      if(cb>0)
      {
          cntb++;
          cb = 0;
      }
  }
  return min(cnta,cntb)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends