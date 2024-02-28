//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int n = s.length();
        if(n <= 2)
        {
            int num = stoi(s);
            return (num % 8 == 0) ? 1 : -1;
        }
        string ns = s.substr(n-3,3);;
        int num= stoi(ns);
        return (num%8 == 0) ? 1 : -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends