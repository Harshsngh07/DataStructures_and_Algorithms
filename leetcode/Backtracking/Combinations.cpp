class Solution {
public:
    vector<vector<int>> res;
    vector<int> v;
    void dfs(int n, int k, int index, int left)
    {
        if(v.size()==k) 
        {
            res.push_back(v);
            return;
        }
        
        for(int i=index;i<=n-left+1;i++)
        {
            v.push_back(i);
            dfs(n,k,i+1,left-1);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        if (n <=0 || k==0)
            return {};
        dfs(n, k, 1, k);
        return res;        
    }
};