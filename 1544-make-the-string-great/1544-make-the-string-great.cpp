class Solution {
public:
    string makeGood(string s) 
    {
        stack<char>str;
        for(char c : s)
        {
            if(!str.empty() && abs(c - str.top()) == 32)
            {
                str.pop();
            }
            else
            {
                str.push(c);
            }
        }
        string result;
        while(!str.empty())
        {
            result  = str.top() + result;
            str.pop();
        }
        
        return result;
    }
};

