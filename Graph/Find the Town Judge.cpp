int findJudge(int n, vector<vector<int>>& trust) {
        int inDegree[n+1];
        int outDegree[n+1];
        
        memset(inDegree,0,sizeof(inDegree));
        memset(outDegree,0,sizeof(outDegree));
        
        for(auto it : trust)
        {
            int u=it[0];
            int v=it[1];
            inDegree[v]++;
            outDegree[u]++;
        }
        
        
        for(int i=1;i<=n;i++)
        {
            if(inDegree[i]==n-1 && outDegree[i]==0)
                return i;
        }
        
        return -1;
        
    }
