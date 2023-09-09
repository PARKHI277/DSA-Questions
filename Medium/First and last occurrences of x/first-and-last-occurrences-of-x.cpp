//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
       
       int left = 0;
       int right = n-1;
       vector<int>ans;
       while(left<n)
       {
           if(arr[left] == x)
           {
               ans.push_back(left);
               break;
           }
           left++;
       }
        
        while(right >= 0)
        {
            if(arr[right] == x)
            {
                ans.push_back(right);
                break;
            }
            right--;
        }
         if(ans.empty())
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends