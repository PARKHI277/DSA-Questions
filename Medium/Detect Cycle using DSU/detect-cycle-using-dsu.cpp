//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.
bool isCyclicUtil(int v, vector<int>& visited, int parent, vector<int> adj[]) {
        visited[v] = 1;
 
        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                if (isCyclicUtil(neighbor, visited, v, adj))
                    return true;
            } else if (neighbor != parent) {
                return true;
            }
        }
 
        return false;
    }
 
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> visited(V, 0);
 
        for (int v = 0; v < V; ++v) {
            if (!visited[v]) {
                if (isCyclicUtil(v, visited, -1, adj))
                    return true;
            }
        }
 
        return false;
    }
 
    
int detectCycle(int V, vector<int>adj[])
{
    // Code here
      if (isCyclic(V, adj))
            return 1;
        return 0;
    
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends