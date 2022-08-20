 #include <bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<queue>

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
     priority_queue<int> maxi;
        
        
        for(int i=l; i<k; i++){
            maxi.push(arr[i]);
        }
        
        for(int i=k; i<=r; i++){
            if(arr[i] < maxi.top()){
                maxi.pop();
                maxi.push(arr[i]);
            }
        }
        int ans = maxi.top();
        return ans;
    }