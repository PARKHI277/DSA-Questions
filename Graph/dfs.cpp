
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  void dfs(int node,vector<int>&ans,vector<int>&visited,vector<int>adj[])
  {
      ans.push_back(node);
      visited[node] = 1;
      for(auto it : adj[node])
      {
          if(visited[it] == 0)
          {
              dfs(it,ans,visited,adj);
          }
      }
  }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
     
        vector<int>visited(V,0);
        vector<int>ans;
        dfs(0,ans,visited,adj);
        return ans;
    }
};


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends