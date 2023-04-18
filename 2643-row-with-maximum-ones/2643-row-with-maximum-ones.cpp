class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>ans;
        int maxi = 0;
        int rowi = 0;
        for(int i = 0;i<m;i++)
        {     
            int cnt   = 0;
              for(int j = 0;j<n;j++)
              {
                  if(mat[i][j] == 1)
                  {
                      cnt++;
                  }
              }
           if(cnt > maxi)
           {
               maxi = cnt;
               rowi  = i;
           }
        }
        
        ans.push_back(rowi);
        ans.push_back(maxi);
        
        return ans;
        
       
    }
};