class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0;
        int j = letters.size()-1;
        int ans  = 0;
        while(i<=j)
        {
            int m = (i+j)/2;
            if(letters[m] > target)
            {
                ans = m;
                j = m-1;
            }
            else
            {
                i = m + 1;
            }
        }
        
        return letters[ans];
    }
};

