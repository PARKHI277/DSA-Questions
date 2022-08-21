#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//brut force
int maximumSubarraySum(vector < int > arr) {
  int n = arr.size();
  int maxSum = INT_MIN;

  for (int i = 0; i <= n - 1; i++) {
    int currSum = 0;
    for (int j = i; j <= n - 1; j++) {
      currSum += arr[j];
      if (currSum > maxSum) {
        maxSum = currSum;
      }
    }
  }

  return maxSum;
}
/// kadane's algo
int maximumSubarraySum(int arr[], int n) {
 int maxSum = INT_MIN;
 int currSum = 0;
 int i = 0;
 for (; i <= n - 1; i++) {
   currSum += arr[i];
 
   if (currSum > maxSum) {
     maxSum = currSum;
   }
 
   if (currSum < 0) {
     currSum = 0;
   }
 }
 
 return maxSum;
 
}
int main() {
    // Your code goes here;
    vector<int> a = {1, 3, 8, -2, 6, -8, 5};
    cout << maximumSubarraySum(a) << endl;
    return 0;
}