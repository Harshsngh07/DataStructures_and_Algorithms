
void findPath(int i, int j, int m[MAX][MAX], int n, string s, vector<string>& ans)
{
    if(i<0 || j<0 || i>=n || j>=n || m[i][j]==0 || m[i][j]==100)
        return ;
    else if (i==n-1 && j==n-1)
    {
        ans.push_back(s);
        return ;
    }
    else
    {
        m[i][j] = 100;
        findPath(i+1,j,m,n,s+'D',ans);
        findPath(i-1,j,m,n,s+'U',ans);
        findPath(i,j+1,m,n,s+'R',ans);
        findPath(i,j-1,m,n,s+'L',ans);
        m[i][j] = 1;
    }
}


vector<string> printPath(int m[MAX][MAX], int n) {
    
    vector<string> ans;
    findPath(0,0,m,n,"",ans);
    sort(ans.begin(),ans.end());
    return ans;
}
