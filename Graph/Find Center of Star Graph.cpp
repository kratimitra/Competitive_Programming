 int findCenter(vector<vector<int>>& edges) {
        map<int,int> m;
        
        for(auto it : edges)
        {
            int u=it[0];
            int v=it[1];
            m[v]++;
            m[u]++;
        }
        
        
        for(auto x:m)
        {
            if(x.second==m.size()-1)
                return x.first;
        }
        
        return -1;
    }
