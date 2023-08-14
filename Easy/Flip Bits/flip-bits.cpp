//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int maxsum = 0;
        int currsum = 0;
        int onecou = 0;
        for(int i = 0;i<n;i++)
        {
           if(a[i] == 1)
           {
               onecou++;
           }
           int val = (a[i] == 0) ? 1 : -1;
           currsum += val;
           maxsum = max(currsum , maxsum);
           if(currsum < 0)
           {
               currsum = 0;
           }
        }
        
        return onecou + maxsum;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends