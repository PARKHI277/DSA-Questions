#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include<queue>

using namespace std;

 int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
       int ans=arr[n-1] - arr[0];
       int smallest=arr[0]+k;
       int largest=arr[n-1]-k;
       int maxi, mini;
       
       //finding new values
       for(int i=0; i<n-1; i++){
           maxi=max(largest,arr[i]+k);
           mini=min(smallest,arr[i+1]-k);
           if(mini < 0)
               continue;
           
           ans=min(ans,maxi-mini);
       }
       return ans;
    }