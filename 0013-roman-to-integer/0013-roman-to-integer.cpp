class Solution {
public:
    int romanToInt(string s)
    {
        unordered_map<char,int>ch{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
                    };
      int l = s.size();
      int ans = ch[s[l-1]]; // 1 
      for(int i = 0;i<l-1;i++)
      {
         if(ch[s[i]]<ch[s[i+1]])
         {
           ans-=ch[s[i]];
         }
        else
        {
           ans+=ch[s[i]];
        }
      }
   return ans;
    }
};