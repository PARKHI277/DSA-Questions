#include <iostream>
#include <vector>
using namespace std;

  long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum = 0;
        int maxsum  = arr[0];
        for(int i = 0;i<n;i++)
        {
            sum  = sum+arr[i];
            if(sum > maxsum)
            {
                maxsum = sum;
            }
            if(sum < 0)
            {
                sum  = 0;
            }
        }
        
        return maxsum;
        
    }