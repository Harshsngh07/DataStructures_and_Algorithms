class Solution {
public:
    
    int dfs(vector<vector<int>>&grid,int i, int j,int n, int m)
    {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0) return 0;
         grid[i][j]=0;
        int count = 1;
        count += dfs(grid,i+1,j,n,m);
        count+= dfs(grid,i-1,j,n,m);
        count+=dfs(grid,i,j+1,n,m);
        count+=dfs(grid,i,j-1,n,m);
        return count;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans(0);
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    ans = max(ans,dfs(grid,i,j,n,m));
            }
        }
                              return ans;
    }
};
