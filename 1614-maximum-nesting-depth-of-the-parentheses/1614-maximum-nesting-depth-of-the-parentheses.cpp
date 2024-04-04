class Solution {
public:
    int maxDepth(string s) {
        int count  = 0;
        int depth = 0;
        for(auto i : s)
        {
            if(i == '(')
            {
                count++;
            }
            else if(i == ')')
            {
                count--;
            }
            if(depth < count)
            {
                depth = count;
            }
            if(count < 0)
            {
                count  = 0;
            }
        }
        return depth;
    }
};
