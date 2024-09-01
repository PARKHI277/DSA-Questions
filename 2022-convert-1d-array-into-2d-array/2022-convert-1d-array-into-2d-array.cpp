class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int k = original.size();
        if(m*n != k )
        {
            return {};
        }
        vector<vector<int>>res(m,vector<int>(n));
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                res[i][j] = original[i*n+j]; // 0*2 + 0
            }
        }
        return res;
    }
};


