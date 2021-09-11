// My answer would be number of connected components-1
void dfs( vector< vector< int>> &adj , vector< bool> &visited , int i)
    {
        visited[i] = true;
        
        for(auto u : adj[i])
        {
            if(!visited[u])
                dfs(adj,visited,u);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        if(connections.size() < n-1)
            return -1;
        
        vector< vector< int>> adj(n);
        
        for(auto v: connections)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        
       vector<bool> visited(n,false);
        
        int components=0;
        
        for(int i=0; i<n; i++)
        {
            if(!visited[i])
            {
                dfs(adj,visited,i);
                components++;
            }
        }
       return components - 1;
      
        
        
    }
