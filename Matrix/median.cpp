#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<vector>

int median(vector<vector<int>>&matrix, int r, int c)
{
        // code here       
      vector<int> ans;
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++)
           ans.push_back(matrix[i][j]);
       }
       
       sort(ans.begin(),ans.end());
       
       int mid = (0+ans.size())/2;
       
       return ans[mid];

    
}