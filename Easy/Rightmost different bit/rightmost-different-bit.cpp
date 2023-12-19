//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int temp = m^n;
        int cnt  = 1;
        if(temp == 0)
        {
            return -1;
        }
        while(temp > 0)
        {
            if(temp & 1 == 1)
            {
                return cnt;
                break;
            }
            else
            {
                cnt++;
                temp >>=1;
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends