//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
   bool search(vector<vector<char>>& arr, string &s,int i,int j,int idx,int n,int m){
        
        // boundry
        if(i<0 or j<0 or i>=n or j>=m){
            return 0;
        }
        
        if(arr[i][j]!=s[idx])return 0;
        
        if(idx==s.size()-1)return 1;
        
        // used
        arr[i][j]=' ';
        
        bool left=search(arr,s,i,j-1,idx+1,n,m);
        bool up=search(arr,s,i-1,j,idx+1,n,m);
        bool right=search(arr,s,i,j+1,idx+1,n,m);
        bool down=search(arr,s,i+1,j,idx+1,n,m);
        
        // restoring
        arr[i][j]=s[idx];
        
        return left or up or right or down;
    }
    bool isWordExist(vector<vector<char>>& arr, string s) {
        int n=arr.size();
        int m=arr[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==s[0] and search(arr,s,i,j,0,n,m)){
                    return 1;
                }
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends