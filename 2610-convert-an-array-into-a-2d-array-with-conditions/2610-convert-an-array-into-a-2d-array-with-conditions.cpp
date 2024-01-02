class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
      unordered_map<int,int>mp;
        int cnt = 0;
        for(auto a : nums)
        {
            mp[a]++;
            cnt = max(cnt , mp[a]); // mp[1] = 3 mp[3] = 3 mp[2] = 1 mp[4] = 1
        }
        vector<vector<int>>v(cnt);
        for(auto a : mp)
        {
            int num = a.first;
            int freq = a.second;
            
            for(int  i = 0;i<freq;i++)
            {
                v[i].push_back(num);
            }
        }
        return v;
        
        
    }
};

 