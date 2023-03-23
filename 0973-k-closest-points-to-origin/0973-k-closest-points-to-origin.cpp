class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         priority_queue<pair<int,pair<int,int>>>p;
        int n = points.size();
        int a  = 0;
        for(int i = 0;i<n;i++)
        {
            int s  = points[i][0] * points[i][0] + points[i][1]*points[i][1];
            p.push({s,{points[i][0],points[i][1]}});
            
            if(p.size() > k)
            {
                p.pop();
            }
        }
        vector<vector<int>>ans;
        while(p.size() > 0)
        {  
            
            vector<int>temp;
            temp.push_back(p.top().second.first);
             temp.push_back(p.top().second.second);
            ans.push_back(temp);
            p.pop();
        }
        
        return ans;
        
    }
};