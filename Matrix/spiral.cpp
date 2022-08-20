#include <bits/stdc++.h>
using namespace std;
#include<vector>

 vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>ans;
        int left = 0, right = c;
       int top = 0, bottom = r;
       while(left<right && top<bottom)
       {
           for(int i = left; i<right; i++)
           	ans.push_back(matrix[top][i]);
           	top++;
           
           for(int i = top; i<bottom; i++)
           	ans.push_back(matrix[i][right-1]);
           	right--;
           
           if(!(left<right) || !(top<bottom))
            break;
           
           for(int i = right-1; i>=left; i--)
           	ans.push_back(matrix[bottom-1][i]);
          	bottom--;
           
           for(int i = bottom-1; i>=top; i--)
           	ans.push_back(matrix[i][left]);
           	left++;
       }
       return ans;
    }