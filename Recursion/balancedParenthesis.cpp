#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

vector<string> generateParenthesis(int n) 
     {
        vector<string> res;
        solve(res, "", n, 0);
        return res;
    }
    void solve(vector<string> &v, string str, int n, int m)
    {
        if(n==0 && m==0) 
        {
            v.push_back(str);
            return;
        }
        if(m > 0)
        { 
            solve(v, str+")", n, m-1);
        }
        if(n > 0)
        { 
            solve(v, str+"(", n-1, m+1);
        }
    }
  
  int main()
  {
      int n;
      cin >> n;
      generateParenthesis(n);
  }