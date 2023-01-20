  #include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<vector> 
#include<queue>
#include<cmath>
using namespace std;
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      vector<int>adj[N];
      //graph
      for(int i = 0;i<N;i++)
      {
          if(Edge[i] != -1)
          {
              adj[Edge[i]].push_back(i);
          }
      }
      
      int val = 0;
      int ans = 0 ;
      for(int i = 0;i<N;i++)
      {
          int sm = 0;
          for(auto x : adj[i])
          {
              sm  = sm + x;
          }
          if(sm >= val)
          {
              val = sm;
              ans = i;
          }
      }
      return ans;
  }
};