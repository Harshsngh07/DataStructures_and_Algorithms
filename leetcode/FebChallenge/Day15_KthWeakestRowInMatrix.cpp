class Solution {
public:
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        int n = mat.size();
        int m = mat[0].size();
        
        int count(0);
        vector<pair<int, int>> vp;
        for(int i=0;i<n;i++)
        {
            count = 0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                    count++;
            }
            vp.push_back({count,i});
        }
    
        sort(vp.begin(), vp.end());

        for(int i=0;i<k;i++)
            v.push_back(vp[i].second);
        
        return v;
    }
};