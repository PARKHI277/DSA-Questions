class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>>merge;
        sort(intervals.begin(),intervals.end());
     
        for(int i = 0;i<n;i++)
        {
            if(merge.empty() || merge.back()[1] < intervals[i][0])
            {
                vector<int>v = {
                    intervals[i][0],
                    intervals[i][1]
                };
                merge.push_back(v);
            }
            else
            {
                merge.back()[1] = max(merge.back()[1] , intervals[i][1]);
            }
        }
        return merge;
    }
};

