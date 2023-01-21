#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(nums1[i] == nums2[j])
                {
                    ans.push_back(nums1[i]);
                    break;
                }
            }
        }
        
        int p = ans.size();
       
        int mi = INT_MAX;
        
        for(int i = 0;i<p;i++)
        {
            mi = min(ans[i],mi);
        }
        
        
        return mi;
    }
};