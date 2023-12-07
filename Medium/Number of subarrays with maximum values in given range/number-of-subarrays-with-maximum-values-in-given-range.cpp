//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        // {2,0,11,3,0}
        //L = 1 , R = 10
        
        int rBound = -1;
        int lBound = -1;
        long long res = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[i] <= R)
            {
                if(a[i] >= L)
                {
                    rBound = i;
                }
                res += rBound - lBound;
            }
            else
            {
                lBound = i;
                rBound = i;
            }
        }
        
        
        return res;
        
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends