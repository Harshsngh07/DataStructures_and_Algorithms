class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        sort(arr.begin(), arr.end());
        vector<pair<int, int>> v;
        vector<int> res;
        
        for(int i=0;i<n;i++)
            v.push_back(make_pair(abs(arr[i]-x), i));
            
        sort(v.begin(), v.end());
        
        for(int i=0;i<k;i++)
            res.push_back(arr[v[i].second]);
        sort(res.begin(), res.end());
        
        return res;
    }  
};
