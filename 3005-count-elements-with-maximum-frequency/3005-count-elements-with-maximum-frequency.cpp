
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int>m;
        
        for(int i  = 0;i<nums.size();i++)
        {
            m[nums[i]]++; // m[1] = 2; m[2] = 2 , m[3] = 1 , m[4] = 1
        }
        int maxf = 0;
        
        for(auto i : m)
        {
            maxf = max(maxf,i.second);
        }
        int maxe = 0;
        
        for(auto j : m)
        {
            if(j.second == maxf)
            {
                maxe++;
            }
        }
        
        int totalf = maxe*maxf;
        
        return totalf;
    }
};

 