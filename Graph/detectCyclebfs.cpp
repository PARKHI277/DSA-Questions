#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool bfs(int start, vector<int> adj[], vector<int> &vis, queue<pair<int,int>> &q){
        q.push({start, -1});
        vis[start] = 1;
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto it : adj[node]){
                if(vis[it] == 0){
                    q.push({it, node});
                    vis[it] = 1;
                }
                else if(it != parent){
                    return true;
                }
            }
        }
        return false;
    }
    
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        //using bfs
        vector<int> vis(V, 0);
        
        queue<pair<int,int>> q;
        
        for(int i=0; i<V; i++){
            if(vis[i] == 0){
                if(bfs(i, adj, vis, q)){
                    return true;
                }
            }
        }
        return false;
    }
};