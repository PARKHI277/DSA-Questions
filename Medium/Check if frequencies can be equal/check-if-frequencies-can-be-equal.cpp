//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	bool sameFreq(string s) // xyyz
	{
	    // code here 
	    
    unordered_map<char,int> mp; 
        int maxi=0;
        for(auto i:s)
        {
            mp[i]++; // mp[x] = 1, mp[y] = 2, mp[z] = 1
            maxi=max(maxi,mp[i]); // 2
        }
        int ct=0;
        for(auto i:mp)
        {
            if(i.second==maxi)
            {
                ct++;  
            }
        }
        if(ct==mp.size())
        {
            return 1;
        }
        
        for(auto i:mp)
        {
            mp[i.first]--;
            set<int> st;
            ct=1;
            for(auto j:mp){
                if(j.second>0)
                    st.insert(j.second);
                if(st.size()>1){
                    ct=0;
                    break;
                }
            }
            if(ct){
                return 1;
            }
            mp[i.first]++;
        }
        return 0;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends