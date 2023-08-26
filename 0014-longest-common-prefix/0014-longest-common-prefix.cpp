class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0)
        {
            return 0;
        }
        if(n == 1)
        {
            return strs[0];
        }
        
        sort(strs.begin(),strs.end());
        int l  = min(strs[0].size(),strs[n-1].size());
        int  i = 0;
        string first  = strs[0];
        string last = strs[n-1];
        
        while(i<l && first[i] == last[i])
        {
            i++;
        }
        
        string pre = first.substr(0,i);
        return pre;
    }
};