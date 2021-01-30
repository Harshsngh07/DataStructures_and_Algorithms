//dfs based solution
class Solution
{
public:
    vector<vector<int>> res;
    vector<int> ans;
    void dfs(int target, int k, int index)
    {
        if (target == 0 && k == 0)
        {
            res.push_back(ans);
            return;
        }

        if (target < index)
            return;

        for (int i = index; i <= 9; i++)
        {
            ans.push_back(i);
            dfs(target - i, k - 1, i + 1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        if (n == 0 || k == 0)
            return {};
        dfs(n, k, 1);
        return res;
    }
};


//backtracking similar to combinationSum1 and combinationSum2

class Solution
{
public:
    vector<vector<int>> res;

    void solve(int pos, int k, int target, vector<int> &candidates, vector<int> &curr)
    {
        if (target == 0 && curr.size() == k)
        {
            res.push_back(curr);
            return;
        }

        if (curr.size() > k || target < 0)
            return;

        for (int i = pos; i < candidates.size(); i++)
        {
            curr.push_back(candidates[i]);
            solve(i + 1, k, target - candidates[i], candidates, curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> curr;
        vector<int> candidates(9);
        for (int i = 0; i < 9; i++)
            candidates[i] = i + 1;
        solve(0, k, n, candidates, curr);
        return res;
    }
};