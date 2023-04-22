class Solution {
public:


    void dfs(vector<int> adj[],int source,vector<int> &vis){
        vis[source]=1;
        for(auto it:adj[source])
        {   
            if(!vis[it]){
                dfs(adj,it,vis); // 1
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>nums[n];
        if(n==1)
        {
            return true;
        }
        for(auto it:edges)
        {
            int u = it[0];
            int v = it[1];
            // cout<<u<<endl;
            // cout<<v<<endl;
            nums[u].push_back(v);  // nums[0] -> 1,2 nums[1] -> 0,2 nums[2] -> 1,0
            nums[v].push_back(u);
        }

        // find visited
        vector<int>vis(n,0);
        dfs(nums,source,vis);
           
           if(vis[destination]==0){
            return false;
        }
       
        return true;
    }
};