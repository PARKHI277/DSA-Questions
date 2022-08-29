#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include<queue>

using namespace std;

int minJumps(int arr[], int n){
        // Your code here
         int mx = 0, j = 0, curr = 0;
        for(int i = 0; i < n -1; i++)
        {
            mx = max(mx, i+arr[i]);
            if(i == curr)
                j++, curr = mx;
            if(i>=mx) return -1;
        }
        return j;
    }