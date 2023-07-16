class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int>hashSet;
        for(int num : nums)
        {
            hashSet.insert(num);
        }
        
        int l = 0;
        for(int num : nums)
        {
            if(!hashSet.count(num-1))
            {
                int currentNum = num;
                int currS = 1;
               
                while(hashSet.count(currentNum+1)){
                    currentNum +=1;
                    currS += 1;
                    
                }
                 l = max(l,currS);
            }
            
           
        }
        
        return l;
    }
};