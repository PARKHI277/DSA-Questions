//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       map<char,int>mp;
       int j = 0;
       for(auto i : S)
       {
           if(mp.count(i))
           {
               mp[i] = -1;
           }
           else
           {
               mp[i] = j;
           }
           j++;
       }
       
       int ans  = INT_MAX;
       for(auto i : mp)
       {
           if(i.second != -1)
           {
               ans = min(ans,i.second);
           }
       }
       
       if(ans == INT_MAX)
       {
           return '$';
       }
       else
       {
           return S[ans];
       }
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends