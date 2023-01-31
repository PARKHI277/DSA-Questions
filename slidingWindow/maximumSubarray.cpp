#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 100,200,300.400 and k = 2 
long maximumSumSubarray(int K, vector<int> &Arr , int N){
    int i, j = 0;
    int maxSum = 0;
    int sum = 0;
    while(j<N)
    {
        sum = sum + Arr[j];
        if( j - i + 1 < K)
        {
            j++;
        }
        else if( j - i + 1 == K)
        {
            maxSum = max(sum, maxSum);
            sum = sum - Arr[i];
            i++;
            j++;
        }
    }

    return maxSum;
    }

    int main()
    {
    vector<int> arr = {100, 200, 300, 400};
    int k = 0;
    int n = 4;
    int sum = maximumSumSubarray(k, arr, n);
    cout << sum << endl;
    }