class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    
    {
        int n = candies.size();
        vector<bool>result;
        int i;
        int max = candies[0];
        
        for(i=0;i<n;i++)
        {
            if(max>candies[i])
            {
                max = max;
            }
            else
            {
                max = candies[i];
            }
        }
        
        cout<<max;
        
        for(i=0;i<n;i++)
        {
            int extra = candies[i] + extraCandies;
            if(extra>=max)
            {
                result.push_back(true);
                
            }
            else
            {
                result.push_back(false);
            }
        }
        
        return result;
    }
};