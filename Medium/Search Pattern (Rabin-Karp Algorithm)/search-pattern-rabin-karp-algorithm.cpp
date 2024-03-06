//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here
             vector<int> ans;
            int n1 = pattern.size();  //Pattern length
            int n2 = text.size();
            int i=0;
            while(i<n2)
            {
                if(text[i] == pattern[0])
                {
                    int index = i;
                    bool isSame = true;
                    for(int j=0; j<n1 and n2-index >= n1-1; j++)
                    {
                        if(text[i+j]!=pattern[j]) 
                        {
                            isSame=false;
                            break;
                        }
                    }
                    if(isSame==true and n2-index >= n1-1)
                    {
                        ans.push_back(index+1);
                    }
                }
                
                i++;
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
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends