#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void reverseString(vector<char>& s) {
       int n = s.size();
        int low = 0, high = n-1;
        
        while(low <= high){
            swap(s[low], s[high]);
            low++; high--;
        }
        return;
        
       
    }