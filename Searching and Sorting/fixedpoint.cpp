	#include <bits/stdc++.h>
using namespace std;
#include<vector>
 
    
    vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>index;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	            index.push_back(i+1);
	        }
	    }
	    return index;
	}