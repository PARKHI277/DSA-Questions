//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:

   vector<int>nextarr(vector<int>arr,int n)
   {
       stack<int>s;
       s.push(-1);
       vector<int>ans(n);
       for(int i = n-1;i>=0;i--)
       {
           int curr = arr[i];
           while(s.top() != -1 && arr[s.top()] >= curr)
           {
               s.pop();
           }
           ans[i] = s.top();
           s.push(i);
       }
       
       return ans;
       
   }
   
         vector<int> prevarr(vector<int> arr, int n)
    {
          stack<int> s;
           s.push(-1);
           vector<int>ans(n);
           for(int i=0; i<n; i++)
           {
               int curr=arr[i];
               while(s.top()!= -1 && arr[s.top()]>=curr)
               {
                   s.pop();
               }
               ans[i]=s.top();
               s.push(i);
           }
           return ans;
    }
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        int n  = arr.size();
        vector<int>next(n);
        vector<int>prev(n);
        next  = nextarr(arr,n);
        prev  = prevarr(arr,n);
        vector<int>ans(n);
        for(int i=0; i<n; i++)
        {
          if(next[i]==-1 && prev[i]==-1)
          {
              ans[i]=-1;
          }
          else if((next[i]==-1 && prev[i]==0)||(next[i]==0 && prev[i]==-1))
          {
              ans[i]=0;
          }
          else if(next[i]==-1)
          {
              ans[i]=prev[i];
          }
          else if(prev[i]==-1)
          {
              ans[i]=next[i];
          }
          else if((i-prev[i])==(next[i]-i))
          {
              if(arr[next[i]]>=arr[prev[i]])
              {
                  ans[i]=prev[i];
              }
              else{
                  ans[i]=next[i];
              }
          }
          else{
              if((i-prev[i])<(next[i]-i))
              {
                  ans[i]=prev[i];
              }
              else{
                  ans[i]=next[i];
              }
          }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends