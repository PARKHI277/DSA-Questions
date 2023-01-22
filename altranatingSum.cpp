#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) 
    {
          vector<int>d;
        bool flag = 1;
        while(n != 0)
        {
            int rem = n%10;
            d.push_back(rem);
            n = n/10;
        }
        reverse(d.begin(),d.end());
        int sum = 0;
        
        for(int val : d)
        {
            if(flag)
            {
                sum  = sum + val;
            }
            else
            {
                sum = sum - val;
                
            }
            flag =! flag;
        }
        
        return sum;
    }
};