class Solution {
public:
    vector<vector<int>> res;
    
    void solve(vector<int>& arr, int pos, int target, vector<int>& path)
    {
        if(target==0)
        {
            res.push_back(path);
            return;
        }
        
        for(int i=pos;i<arr.size() && target>=arr[i];i++)
        {
            if(i > 0 && i > pos && arr[i]==arr[i-1]){
                continue;
            }
            path.push_back(arr[i]);
            solve(arr, i+1, target-arr[i], path);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        solve(candidates, 0, target, path);
        return res;
    }
};