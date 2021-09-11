#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  void dfs(vector<vector<char>>& A, int N, int M,int i,int j)
{
    if(i<0 || i>=N || j<0 || j>=M || A[i][j]!='1')
    return ;
    
    A[i][j]='0';
    
    dfs(A,N,M,i-1,j);
    dfs(A,N,M,i-1,j+1);
    dfs(A,N,M,i-1,j-1);
    dfs(A,N,M,i,j+1);
    dfs(A,N,M,i+1,j+1);
    dfs(A,N,M,i+1,j);
    dfs(A,N,M,i+1,j-1);
    dfs(A,N,M,i,j-1);
   
}
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& A) {
        // Code here
        int count=0;
        int N=A.size();
        int M=A[0].size();
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(A[i][j]=='1')
            {
                count++;
                dfs(A,N,M,i,j);
            }
        }
    }
    
    return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends
