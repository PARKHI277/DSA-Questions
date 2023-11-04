class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int falltime = 0;
        
        for (int i = 0;i<left.size();i++)
        {
            falltime = max(falltime,left[i]);  //   4
        }
        
        for(int i  = 0;i<right.size();i++)
        {
            falltime = max(falltime , n-right[i]);
        }
        
        return falltime;
    }
};


 