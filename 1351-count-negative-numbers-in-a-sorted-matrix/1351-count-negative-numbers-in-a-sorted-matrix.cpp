class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(auto v : grid)
        {
            for(auto val : v)
            {
                if(val < 0)
                {
                    count++;
                }
            }
        }
        
        return count;
    }
};