//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    
    int helper(int *arr, int i ,vector<int>&memo)
    {
        if(i<0)
        {
            return 0;
        }
        if(i == 0)
        {
            return arr[0];
        }
        if(memo[i] != -1)
        {
            return memo[i];
        }
        
        int a , b;
        a = b = 0;
        
        a = helper(arr,i-1,memo);
        b = arr[i] + helper(arr,i-2,memo);
        
        return memo[i] = max(a,b);
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
      vector<int>memo(n+1,-1);
      return helper(arr,n-1,memo);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends