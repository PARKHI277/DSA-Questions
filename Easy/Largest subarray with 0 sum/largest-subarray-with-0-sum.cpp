//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int maxL = 0;
        unordered_map<int,int>sumI;
        int sum = 0;
        for(int i  = 0;i<n;i++)
        {
            sum += A[i];
            if(sum == 0)
            {
                maxL = i+1;
            }
            else if(sumI.find(sum) != sumI.end())
            {
                maxL = max(maxL,i-sumI[sum]);
               
            }
            else
            {
                sumI[sum]  = i; // sumI[15] = 0 s
            } 
        }
        return maxL;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends