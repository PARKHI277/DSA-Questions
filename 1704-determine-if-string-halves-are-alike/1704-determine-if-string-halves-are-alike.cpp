class Solution {
public:
     bool isVowel(char ch)
    {
        if(tolower(ch) == 'a' ||tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' ||tolower(ch) == 'u')
        {
            return true;
        }
        
        return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int count = 0;
        for(int i = 0;i<n/2;i++)
        {
            if(isVowel(s[i]))
            {
                count++;
            }
        }
        
        for(int i = n/2;i<=n;i++)
        {
            if(isVowel(s[i]))
            {
                count--;
            }
        }
        
        if(count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


