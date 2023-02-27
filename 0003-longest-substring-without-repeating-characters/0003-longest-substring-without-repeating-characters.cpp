class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int i=0;
        int j=0;
        unordered_map<char,int>map;
        int maxi=0;
        while(j<s.length()){
            map[s[j]]++;
            if(map.size()==j-i+1){
                maxi=max(maxi,j-i+1);
                j++;
            }else if(map.size()<j-i+1){
                while(map.size()<j-i+1){
                    map[s[i]]--;
                    if(map[s[i]]==0){
                        map.erase(s[i]);
                        
                    }
                    i++;
                    
                }
               j++;
            }
        }
        return maxi;
    }
};